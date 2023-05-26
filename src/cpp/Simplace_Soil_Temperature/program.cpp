

#include "SoilTemperatureComponent.h"
#include "SoilTemperatureState.h"
#include "SoilTemperatureRate.h"
#include "SoilTemperatureExogenous.h"
#include <iostream>

void cal()
{
    SoilTemperatureState s;
    SoilTemperatureState s1;
    SoilTemperatureRate r;
    SoilTemperatureExogenous ex;
    SoilTemperatureAuxiliary a;
    SnowCoverCalculator mod1;
    STMPsimCalculator mod2;
    SoilTemperatureComponent mod;

    mod1.setcCarbonContent(10.0);
    ex.setiTempMax(3.0);
    ex.setiTempMin(-9.0);
    ex.setiRadiation(1.4);
    ex.setiRAIN(6.0);
    ex.setiCropResidues(30.0);
    ex.setiPotentialSoilEvaporation(0.6);
    ex.setiLeafAreaIndex(0.1);
    ex.setiSoilTempArray({2.6,5.4,8.6,12.2,11.4,10.6,9.8,9.0});
    mod1.Init(s,s1, r, a, ex);

    s.setSnowWaterContent(5.0);
    s.setAgeOfSnow(5);
    s.setSoilSurfaceTemperature(1.8397688);
    //mod1.Calculate_Model(s,s1, r, a, ex);
        //SnowWaterContent: 10.7;
    /*cout<<"SnowWaterContent estimated :"<<endl;
    cout<<s.getSnowWaterContent()<<endl;
        //AgeOfSnow: 6;
    cout<<"AgeOfSnow estimated :"<<endl;
    cout<<s.getAgeOfSnow()<<endl;
        //SnowIsolationIndex: 1.0;
    cout<<"SnowIsolationIndex estimated :"<<endl;
    cout<<a.getSnowIsolationIndex()<<endl;
        //SoilSurfaceTemperature: 2.6;
    cout<<"SoilSurfaceTemperature estimated :"<<endl;
    cout<<s.getSoilSurfaceTemperature()<<endl;*/


    mod2.setcSoilLayerDepth( {0.1,0.5,1.5});
    mod2.setcFirstDayMeanTemp(15.0);
    mod2.setcAVT(9.0);
    mod2.setcABD(1.4);
    mod2.setcDampingDepth(6.0);
    ex.setiSoilWaterContent(0.3);
    ex.setiSoilSurfaceTemperature(6.0);
    mod2.Init(s,s1, r, a, ex);
    /*mod2.Calculate_Model(s,s1, r, a, ex);
    //SoilTempArray: [13.624360856350041, 13.399968504634286, 12.599999999999845, 12.2, 11.4, 10.6, 9.799999999999999, 9.0];
    cout<<"SoilTempArray estimated :"<<endl;
    for (int i=0; i<s.getSoilTempArray().size(); i++) cout<<s.getSoilTempArray()[i]<<endl;

    mod.setcAverageGroundTemperature(15.5);
    cout<<mod2.getcAVT()<<endl;*/
    mod.setcCarbonContent(10.0);
    mod.setcSoilLayerDepth({0.1,0.5,1.5});
    mod.setcFirstDayMeanTemp(15.0);
    mod.setcAverageGroundTemperature(9.0);
    mod.setcAverageBulkDensity(1.4);
    mod.setcDampingDepth(6.0);

    mod.Calculate_Model(s,s1, r, a, ex);
    for (int i=0; i<s.getSoilTempArray().size(); i++) cout<<s.getSoilTempArray()[i]<<endl;

}

int main()
{
    // Call cal function
    cal();

    return 0;
}

//g++ -c STEMP_Exogenous.cpp -o STEMP_Exogenous.o
// g++ program.cpp STEMP_State.o STEMP_Rate.o STEMP_Exogenous.o STEMP_AUxiliary.o STEMP.o -o myprogram
