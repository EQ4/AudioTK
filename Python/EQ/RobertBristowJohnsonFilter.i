
%{
#include <ATK/EQ/RobertBristowJohnsonFilter.h>
%}

namespace ATK
{
  template<class DataType>
  class RobertBristowJohnsonLowPassCoefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
  };
  
  template<class DataType>
  class RobertBristowJohnsonHighPassCoefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
  };

  template<class DataType>
  class RobertBristowJohnsonBandPassCoefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
  };
  
  template<class DataType>
  class RobertBristowJohnsonBandPass2Coefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
  };

  template<class DataType>
  class RobertBristowJohnsonAllPassCoefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
  };
  
  template<class DataType>
  class RobertBristowJohnsonBandPassPeakCoefficients: public BaseSecondOrderCoefficients<DataType>
  {
  public:
    void set_Q(DataType Q);
    DataType get_Q() const;
    void set_gain(DataType Q);
    DataType get_gain() const;
  };
}

%template(FloatRobertBristowJohnsonLowPassFilterCoefficients) ATK::RobertBristowJohnsonLowPassCoefficients<float>;
%template(DoubleRobertBristowJohnsonLowPassFilterCoefficients) ATK::RobertBristowJohnsonLowPassCoefficients<double>;
%template(FloatRobertBristowJohnsonHighPassFilterCoefficients) ATK::RobertBristowJohnsonHighPassCoefficients<float>;
%template(DoubleRobertBristowJohnsonHighPassFilterCoefficients) ATK::RobertBristowJohnsonHighPassCoefficients<double>;
%template(FloatRobertBristowJohnsonBandPassFilterCoefficients) ATK::RobertBristowJohnsonBandPassCoefficients<float>;
%template(DoubleRobertBristowJohnsonBandPassFilterCoefficients) ATK::RobertBristowJohnsonBandPassCoefficients<double>;
%template(FloatRobertBristowJohnsonBandPass2FilterCoefficients) ATK::RobertBristowJohnsonBandPass2Coefficients<float>;
%template(DoubleRobertBristowJohnsonBandPass2FilterCoefficients) ATK::RobertBristowJohnsonBandPass2Coefficients<double>;
%template(FloatRobertBristowJohnsonAllPassFilterCoefficients) ATK::RobertBristowJohnsonAllPassCoefficients<float>;
%template(DoubleRobertBristowJohnsonAllPassFilterCoefficients) ATK::RobertBristowJohnsonAllPassCoefficients<double>;
%template(FloatRobertBristowJohnsonBandPassPeakFilterCoefficients) ATK::RobertBristowJohnsonBandPassPeakCoefficients<float>;
%template(DoubleRobertBristowJohnsonBandPassPeakFilterCoefficients) ATK::RobertBristowJohnsonBandPassPeakCoefficients<double>;


%template(FloatRobertBristowJohnsonLowPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonLowPassCoefficients<float> >;
%template(DoubleRobertBristowJohnsonLowPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonLowPassCoefficients<double> >;
%template(FloatRobertBristowJohnsonHighPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonHighPassCoefficients<float> >;
%template(DoubleRobertBristowJohnsonHighPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonHighPassCoefficients<double> >;
%template(FloatRobertBristowJohnsonBandPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPassCoefficients<float> >;
%template(DoubleRobertBristowJohnsonBandPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPassCoefficients<double> >;
%template(FloatRobertBristowJohnsonBandPass2FilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPass2Coefficients<float> >;
%template(DoubleRobertBristowJohnsonBandPass2FilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPass2Coefficients<double> >;
%template(FloatRobertBristowJohnsonAllPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonAllPassCoefficients<float> >;
%template(DoubleRobertBristowJohnsonAllPassFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonAllPassCoefficients<double> >;
%template(FloatRobertBristowJohnsonBandPassPeakFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPassPeakCoefficients<float> >;
%template(DoubleRobertBristowJohnsonBandPassPeakFilterCoefficientsIIRFilter) ATK::IIRFilter<ATK::RobertBristowJohnsonBandPassPeakCoefficients<double> >;