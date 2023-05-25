#include "SoilTemperatureComponent.h"

    SoilTemperatureComponent::SoilTemperatureComponent()
    {
           
    }
    

double SoilTemperatureComponent::getcCarbonContent() {return this-> cCarbonContent; }
vector<double> & SoilTemperatureComponent::getcSoilLayerDepth() {return this-> cSoilLayerDepth; }
double SoilTemperatureComponent::getcFirstDayMeanTemp() {return this-> cFirstDayMeanTemp; }
double SoilTemperatureComponent::getcAverageGroundTemperature() {return this-> cAverageGroundTemperature; }
double SoilTemperatureComponent::getcAverageBulkDensity() {return this-> cAverageBulkDensity; }
double SoilTemperatureComponent::getcDampingDepth() {return this-> cDampingDepth; }

void SoilTemperatureComponent::setcCarbonContent(double _cCarbonContent)
{
    _SnowCoverCalculator.setcCarbonContent(_cCarbonContent);
}
void SoilTemperatureComponent::setcSoilLayerDepth(const vector<double> & _cSoilLayerDepth)
{
    _STMPsimCalculator.setcSoilLayerDepth(_cSoilLayerDepth);
}
void SoilTemperatureComponent::setcFirstDayMeanTemp(double _cFirstDayMeanTemp)
{
    _STMPsimCalculator.setcFirstDayMeanTemp(_cFirstDayMeanTemp);
}
void SoilTemperatureComponent::setcAverageGroundTemperature(double _cAverageGroundTemperature)
{
    _STMPsimCalculator.setcAverageGroundTemperature(_cAverageGroundTemperature);
}
void SoilTemperatureComponent::setcAverageBulkDensity(double _cAverageBulkDensity)
{
    _STMPsimCalculator.setcAverageBulkDensity(_cAverageBulkDensity);
}
void SoilTemperatureComponent::setcDampingDepth(double _cDampingDepth)
{
    _STMPsimCalculator.setcDampingDepth(_cDampingDepth);
}
void SoilTemperatureComponent::Calculate_Model(SoilTemperatureState& s, SoilTemperatureState& s1, SoilTemperatureRate& r, SoilTemperatureAuxiliary& a, SoilTemperatureExogenous& ex)
{
    iTempMax = ex.iAirTemperatureMax;
    iTempMin = ex.iAirTemperatureMin;
    iRadiation = ex.iGlobalSolarRadiation;
    iSoilTempArray = ex.SoilTempArray;
    cAVT = cAverageGroundTemperature;
    cABD = cAverageBulkDensity;
    _SnowCoverCalculator.Calculate_Model(s, s1, r, a, ex);
    ex.iSoilSurfaceTemperature = s.SoilSurfaceTemperature;
    _STMPsimCalculator.Calculate_Model(s, s1, r, a, ex);
}
SoilTemperatureComponent::SoilTemperatureComponent(const SoilTemperatureComponent& toCopy)
{
    cCarbonContent = toCopy.cCarbonContent;
    
        for (int i = 0; i < ; i++)
        {
            cSoilLayerDepth[i] = toCopy.cSoilLayerDepth[i];
        }
    
    cFirstDayMeanTemp = toCopy.cFirstDayMeanTemp;
    cAverageGroundTemperature = toCopy.cAverageGroundTemperature;
    cAverageBulkDensity = toCopy.cAverageBulkDensity;
    cDampingDepth = toCopy.cDampingDepth;
}