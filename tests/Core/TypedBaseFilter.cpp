/**
 * \file TypedBaseFilter.cpp
 */

#include <ATK/Core/TypedBaseFilter.h>

#include <ATK/Mock/TriangleCheckerFilter.h>
#include <ATK/Mock/TriangleGeneratorFilter.h>

#define BOOST_TEST_NO_MAIN
#define BOOST_TEST_MODULE ATKCore_test
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( TypedBaseFilter_constructor_test_int16_t )
{
  BOOST_CHECK_NO_THROW(ATK::TypedBaseFilter<std::int16_t> filter(0, 0));
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_constructor_test_int32_t )
{
  BOOST_CHECK_NO_THROW(ATK::TypedBaseFilter<std::int32_t> filter(0, 0));
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_constructor_test_int64_t )
{
  BOOST_CHECK_NO_THROW(ATK::TypedBaseFilter<std::int64_t> filter(0, 0));
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_constructor_test_float )
{
  BOOST_CHECK_NO_THROW(ATK::TypedBaseFilter<float> filter(0, 0));
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_constructor_test_double )
{
  BOOST_CHECK_NO_THROW(ATK::TypedBaseFilter<double> filter(0, 0));
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_input_sampling_rate_test_int16_t )
{
  ATK::TypedBaseFilter<std::int16_t> filter(0, 0);
  filter.set_input_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_input_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_output_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_input_sampling_rate_test_int32_t )
{
  ATK::TypedBaseFilter<std::int32_t> filter(0, 0);
  filter.set_input_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_input_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_output_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_input_sampling_rate_test_int64_t )
{
  ATK::TypedBaseFilter<std::int64_t> filter(0, 0);
  filter.set_input_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_input_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_output_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_input_sampling_rate_test_float )
{
  ATK::TypedBaseFilter<float> filter(0, 0);
  filter.set_input_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_input_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_output_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_input_sampling_rate_test_double )
{
  ATK::TypedBaseFilter<double> filter(0, 0);
  filter.set_input_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_input_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_output_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_output_sampling_rate_test_int16_t )
{
  ATK::TypedBaseFilter<std::int16_t> filter(0, 0);
  filter.set_output_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_output_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_input_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_output_sampling_rate_test_int32_t )
{
  ATK::TypedBaseFilter<std::int32_t> filter(0, 0);
  filter.set_output_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_output_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_input_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_output_sampling_rate_test_int64_t )
{
  ATK::TypedBaseFilter<std::int64_t> filter(0, 0);
  filter.set_output_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_output_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_input_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_output_sampling_rate_test_float )
{
  ATK::TypedBaseFilter<float> filter(0, 0);
  filter.set_output_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_output_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_input_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_set_output_sampling_rate_test_double )
{
  ATK::TypedBaseFilter<double> filter(0, 0);
  filter.set_output_sampling_rate(44100);
  BOOST_CHECK_EQUAL(filter.get_output_sampling_rate(), 44100);
  BOOST_CHECK_NE(filter.get_input_sampling_rate(), 44100);
}

BOOST_AUTO_TEST_CASE( TypedBaseFilter_pipeline_triangle_test )
{
  ATK::TriangleGeneratorFilter<std::int64_t> generator;
  generator.set_output_sampling_rate(48000);
  generator.set_amplitude(1000000);
  generator.set_frequency(1000);
  
  ATK::TriangleCheckerFilter<std::int64_t> checker;
  checker.set_input_sampling_rate(48000);
  checker.set_amplitude(1000000);
  checker.set_frequency(1000);
  
  checker.set_input_port(0, &generator, 0);
  checker.process(1024*1024);
}
