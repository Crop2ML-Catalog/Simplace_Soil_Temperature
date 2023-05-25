#include "SoilTemperatureExogenous.h"
SoilTemperatureExogenous::SoilTemperatureExogenous() { }

double SoilTemperatureExogenous::getiAirTemperatureMax() {return this-> iAirTemperatureMax; }
double SoilTemperatureExogenous::getiAirTemperatureMin() {return this-> iAirTemperatureMin; }
double SoilTemperatureExogenous::getiGlobalSolarRadiation() {return this-> iGlobalSolarRadiation; }
double SoilTemperatureExogenous::getiRAIN() {return this-> iRAIN; }
double SoilTemperatureExogenous::getiCropResidues() {return this-> iCropResidues; }
double SoilTemperatureExogenous::getiPotentialSoilEvaporation() {return this-> iPotentialSoilEvaporation; }
double SoilTemperatureExogenous::getiLeafAreaIndex() {return this-> iLeafAreaIndex; }
vector<double> & SoilTemperatureExogenous::getSoilTempArray() {return this-> SoilTempArray; }
double SoilTemperatureExogenous::getiSoilWaterContent() {return this-> iSoilWaterContent; }
double SoilTemperatureExogenous::getiSoilSurfaceTemperature() {return this-> iSoilSurfaceTemperature; }

void SoilTemperatureExogenous::setiAirTemperatureMax(double _iAirTemperatureMax) { this->iAirTemperatureMax = _iAirTemperatureMax; }
void SoilTemperatureExogenous::setiAirTemperatureMin(double _iAirTemperatureMin) { this->iAirTemperatureMin = _iAirTemperatureMin; }
void SoilTemperatureExogenous::setiGlobalSolarRadiation(double _iGlobalSolarRadiation) { this->iGlobalSolarRadiation = _iGlobalSolarRadiation; }
void SoilTemperatureExogenous::setiRAIN(double _iRAIN) { this->iRAIN = _iRAIN; }
void SoilTemperatureExogenous::setiCropResidues(double _iCropResidues) { this->iCropResidues = _iCropResidues; }
void SoilTemperatureExogenous::setiPotentialSoilEvaporation(double _iPotentialSoilEvaporation) { this->iPotentialSoilEvaporation = _iPotentialSoilEvaporation; }
void SoilTemperatureExogenous::setiLeafAreaIndex(double _iLeafAreaIndex) { this->iLeafAreaIndex = _iLeafAreaIndex; }
void SoilTemperatureExogenous::setSoilTempArray(vector<double> const & _SoilTempArray){
    this->SoilTempArray = _SoilTempArray;
}
void SoilTemperatureExogenous::setiSoilWaterContent(double _iSoilWaterContent) { this->iSoilWaterContent = _iSoilWaterContent; }
void SoilTemperatureExogenous::setiSoilSurfaceTemperature(double _iSoilSurfaceTemperature) { this->iSoilSurfaceTemperature = _iSoilSurfaceTemperature; }