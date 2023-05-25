#ifndef _SoilTemperatureExogenous_
#define _SoilTemperatureExogenous_
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
# include<vector>
# include<string>
using namespace std;
class SoilTemperatureExogenous
{
    private:
        double iAirTemperatureMax ;
        double iAirTemperatureMin ;
        double iGlobalSolarRadiation ;
        double iRAIN ;
        double iCropResidues ;
        double iPotentialSoilEvaporation ;
        double iLeafAreaIndex ;
        vector<double> SoilTempArray ;
        double iSoilWaterContent ;
        double iSoilSurfaceTemperature ;
    public:
        SoilTemperatureExogenous();
        double getiAirTemperatureMax();
        void setiAirTemperatureMax(double _iAirTemperatureMax);
        double getiAirTemperatureMin();
        void setiAirTemperatureMin(double _iAirTemperatureMin);
        double getiGlobalSolarRadiation();
        void setiGlobalSolarRadiation(double _iGlobalSolarRadiation);
        double getiRAIN();
        void setiRAIN(double _iRAIN);
        double getiCropResidues();
        void setiCropResidues(double _iCropResidues);
        double getiPotentialSoilEvaporation();
        void setiPotentialSoilEvaporation(double _iPotentialSoilEvaporation);
        double getiLeafAreaIndex();
        void setiLeafAreaIndex(double _iLeafAreaIndex);
        vector<double> & getSoilTempArray();
        void setSoilTempArray(const vector<double> &  _SoilTempArray);
        double getiSoilWaterContent();
        void setiSoilWaterContent(double _iSoilWaterContent);
        double getiSoilSurfaceTemperature();
        void setiSoilSurfaceTemperature(double _iSoilSurfaceTemperature);

};
#endif