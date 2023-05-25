
using System;
using System.Collections.Generic;
using CRA.ModelLayer.Core;
using System.Reflection;
using CRA.ModelLayer.ParametersManagement;   

namespace SoilTemperature.DomainClass
{
    public class SoilTemperatureExogenous : ICloneable, IDomainClass
    {
        private double _iAirTemperatureMax;
        private double _iTempMax;
        private double _iAirTemperatureMin;
        private double _iTempMin;
        private double _iGlobalSolarRadiation;
        private double _iRadiation;
        private double _iRAIN;
        private double _iCropResidues;
        private double _iPotentialSoilEvaporation;
        private double _iLeafAreaIndex;
        private double[] _SoilTempArray;
        private double[] _iSoilTempArray;
        private double _iSoilWaterContent;
        private double _iSoilSurfaceTemperature;
        private ParametersIO _parametersIO;

        public SoilTemperatureExogenous()
        {
            _parametersIO = new ParametersIO(this);
        }

        public SoilTemperatureExogenous(SoilTemperatureExogenous toCopy, bool copyAll) // copy constructor 
        {
            if (copyAll)
            {
                iAirTemperatureMax = toCopy.iAirTemperatureMax;
                iTempMax = toCopy.iTempMax;
                iAirTemperatureMin = toCopy.iAirTemperatureMin;
                iTempMin = toCopy.iTempMin;
                iGlobalSolarRadiation = toCopy.iGlobalSolarRadiation;
                iRadiation = toCopy.iRadiation;
                iRAIN = toCopy.iRAIN;
                iCropResidues = toCopy.iCropResidues;
                iPotentialSoilEvaporation = toCopy.iPotentialSoilEvaporation;
                iLeafAreaIndex = toCopy.iLeafAreaIndex;
                SoilTempArray = new double[toCopy.SoilTempArray.Length];
            for (int i = 0; i < toCopy.SoilTempArray.Length; i++)
            { SoilTempArray[i] = toCopy.SoilTempArray[i]; }
    
                iSoilTempArray = new double[toCopy.iSoilTempArray.Length];
            for (int i = 0; i < toCopy.iSoilTempArray.Length; i++)
            { iSoilTempArray[i] = toCopy.iSoilTempArray[i]; }
    
                iSoilWaterContent = toCopy.iSoilWaterContent;
                iSoilSurfaceTemperature = toCopy.iSoilSurfaceTemperature;
            }
        }

        public double iAirTemperatureMax
        {
            get { return this._iAirTemperatureMax; }
            set { this._iAirTemperatureMax= value; } 
        }
        public double iTempMax
        {
            get { return this._iTempMax; }
            set { this._iTempMax= value; } 
        }
        public double iAirTemperatureMin
        {
            get { return this._iAirTemperatureMin; }
            set { this._iAirTemperatureMin= value; } 
        }
        public double iTempMin
        {
            get { return this._iTempMin; }
            set { this._iTempMin= value; } 
        }
        public double iGlobalSolarRadiation
        {
            get { return this._iGlobalSolarRadiation; }
            set { this._iGlobalSolarRadiation= value; } 
        }
        public double iRadiation
        {
            get { return this._iRadiation; }
            set { this._iRadiation= value; } 
        }
        public double iRAIN
        {
            get { return this._iRAIN; }
            set { this._iRAIN= value; } 
        }
        public double iCropResidues
        {
            get { return this._iCropResidues; }
            set { this._iCropResidues= value; } 
        }
        public double iPotentialSoilEvaporation
        {
            get { return this._iPotentialSoilEvaporation; }
            set { this._iPotentialSoilEvaporation= value; } 
        }
        public double iLeafAreaIndex
        {
            get { return this._iLeafAreaIndex; }
            set { this._iLeafAreaIndex= value; } 
        }
        public double[] SoilTempArray
        {
            get { return this._SoilTempArray; }
            set { this._SoilTempArray= value; } 
        }
        public double[] iSoilTempArray
        {
            get { return this._iSoilTempArray; }
            set { this._iSoilTempArray= value; } 
        }
        public double iSoilWaterContent
        {
            get { return this._iSoilWaterContent; }
            set { this._iSoilWaterContent= value; } 
        }
        public double iSoilSurfaceTemperature
        {
            get { return this._iSoilSurfaceTemperature; }
            set { this._iSoilSurfaceTemperature= value; } 
        }

        public string Description
        {
            get { return "SoilTemperatureExogenous of the component";}
        }

        public string URL
        {
            get { return "http://" ;}
        }

        public virtual IDictionary<string, PropertyInfo> PropertiesDescription
        {
            get { return _parametersIO.GetCachedProperties(typeof(IDomainClass));}
        }

        public virtual Boolean ClearValues()
        {
             _iAirTemperatureMax = default(double);
             _iTempMax = default(double);
             _iAirTemperatureMin = default(double);
             _iTempMin = default(double);
             _iGlobalSolarRadiation = default(double);
             _iRadiation = default(double);
             _iRAIN = default(double);
             _iCropResidues = default(double);
             _iPotentialSoilEvaporation = default(double);
             _iLeafAreaIndex = default(double);
             _SoilTempArray = default(double[]);
             _iSoilTempArray = default(double[]);
             _iSoilWaterContent = default(double);
             _iSoilSurfaceTemperature = default(double);
            return true;
        }

        public virtual Object Clone()
        {
            IDomainClass myclass = (IDomainClass) this.MemberwiseClone();
            _parametersIO.PopulateClonedCopy(myclass);
            return myclass;
        }
    }
}