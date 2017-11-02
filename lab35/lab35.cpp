/* Created By: Ruby Aguilar
 * Created On: 10/24/2017
 * This program will run the Temperature Converter Class
 */
 #include<iostream>
 using namespace std;


class TemperatureConverter {
    private:
        double kelvin_;
    public:
        TemperatureConverter();
        TemperatureConverter(double valueKelvin);
        
        void SetTempFromKelvin (double valueKelvin);
        double GetTempFromKelvin();
        void SetTempFromCelsius(double valueCelsius);
        void SetTempFromFahrenheit(double valueFarenheit);
        double GetTempAsCelsius ();
        double GetTempAsFahrenheit ();
        void PrintTemperatures ();
};

TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
    return;
}
TemperatureConverter::TemperatureConverter(double valueKelvin){
    if (valueKelvin >= 0){
        kelvin_ = valueKelvin;
    }
    else{
        cout<< "Issue: Value entered is less than 0."<<endl;
    }
    return;
    
}
void TemperatureConverter::SetTempFromKelvin(double valueKelvin){
    if (kelvin_ >= 0){
        kelvin_ = valueKelvin;
}
    else{
        cout<< "Issue: Value entered is less than 0."<< endl;
}
 return;   
}
double TemperatureConverter::SetTempFromKelvin (double valueKelvin){
    return kelvin_;
}
void TemperatureConverter::SetTempFromCelsius(double valueCelsius){
    if(valueCelsius >= -273.15){
        kelvin_ = valueCelsius + 273.15;
    }
    else {
        cout<< "Issue: Value is less than -273.15."<<endl;
    }
return;
}
void TemperatureConverter::SetTempFromFahrenheit(double valueFarenheit){
    if (valueFarenheit >= -459.67){
        kelvin_ = (5* (valueFarenheit - 32)/9) +273.15;
    }
    else{
        cout<< "Issue: Value is less than -459.67"<< endl;
    }
return;
}
double TemperatureConverter::GetTempAsCelsius(){
    return (kelvin_ - 273.15);
    }
double TemperatureConverter::GetTempAsFahrenheit(){
    return ((GetTempAsCelsius()*9)/5 +32);
}

void TemperatureConverter::PrintTemperatures(){
    cout<<"Kelvin; " << GetTempFromKelvin << endl;
    cout<<"Celsius; " << GetTempFromCelsius << endl;
    cout<<"Farenheit; " << GetTempFromFarenheit << endl;
    return;
}