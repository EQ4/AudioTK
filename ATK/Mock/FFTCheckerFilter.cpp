/**
 * \file FFTCheckerFilter.cpp
 */

#include "FFTCheckerFilter.h"

#include <cmath>

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_NO_MAIN
#include <boost/test/unit_test.hpp>

namespace ATK
{
  template<class DataType_>
  FFTCheckerFilter<DataType_>::FFTCheckerFilter()
  :TypedBaseFilter<DataType_>(1, 0)
  {
    FFTimpl.reset(new FFT<DataType_>);
  }
  
  template<class DataType_>
  FFTCheckerFilter<DataType_>::~FFTCheckerFilter()
  {
  }
  
  template<class DataType_>
  void FFTCheckerFilter<DataType_>::set_checks(const std::vector<std::pair<int, DataType> >& frequency_checks)
  {
    this->frequency_checks = frequency_checks;
  }

  template<class DataType_>
  void FFTCheckerFilter<DataType_>::setup()
  {
    FFTimpl->set_size(input_sampling_rate);
  }
  
  template<class DataType_>
  void FFTCheckerFilter<DataType_>::process_impl(std::int64_t size)
  {
    for(std::int64_t i = 0; i < size/input_sampling_rate; ++i)
    {
      FFTimpl->process(converted_inputs[0] + i * input_sampling_rate);
      std::vector<DataType_> output_freqs;
      FFTimpl->get_amp(output_freqs);
      
      for(int j = 0; j < frequency_checks.size(); ++j)
      {
        DataType amp = output_freqs[frequency_checks[j].first];
        DataType amp_check = frequency_checks[j].second * frequency_checks[j].second;
        if(amp_check == 0)
        {
          BOOST_REQUIRE_SMALL(amp, 0.01);
        }
        else
        {
          BOOST_REQUIRE_CLOSE(amp, amp_check, 0.01);
        }
      }
    }
  }
  
  template class FFTCheckerFilter<double>;
}
