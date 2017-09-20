/* Ruby Aguilar
September 19,2017
Lab 2.1 create a program that calculates winchill according to the old and new formula then compares the difference between the two.
*/

#include <iostream>
#include <stdio.h>
#include <math.h>      // square root and raise to a power is in this library
using namespace std;


int main()
{
    float temp_f = 0.0; // user input of temp
    float wind_speed = 0.0; // user input of velocity
    float old_style_wind_chill = 0.0; // equation  
    float new_style_wind_chill = 0.0; // equation
    float difference = 0.0; // equation
    
    
    cout << "What is the temperature in Farenheit?"<< endl; // get user input of temp
    cin >> temp_f;
    
    cout << "What is the starting wind speed (velocity)?"<<endl; // get user input of velocity
    cin >> wind_speed;
    
    old_style_wind_chill= 0.081 * (3.71* sqrt(wind_speed) + 5.81 - 0.25 * wind_speed) * (temp_f-91.4) +91.4; // old equation for wind chill
    new_style_wind_chill= 35.74 + 0.6215 *temp_f - 35.75*(pow (wind_speed, 0.16)) + 0.4275 * temp_f; // new equation for wind chill
    difference = old_style_wind_chill - new_style_wind_chill; // difference between equations
    
    
    cout <<"Wind Speed         Old formula         New Formula          Difference" << endl; // output info in a column type style
    cout << wind_speed << "                   "<< old_style_wind_chill << "                "<<new_style_wind_chill<< "         "<< difference<< endl;
    
    
    /* What is the temperature in Farenheit?
30
What is the starting wind speed (velocity)?
4
 Wind Speed         Old formula         New Formula          Difference
4   30.5753      22.5822    7.99314

What is the temperature in Farenheit?
39.25
What is the starting wind speed (velocity)?
10
Wind Speed         Old formula         New Formula          Difference
10                   27.8601                25.2388         2.62135

What is the temperature in Farenheit?
100
What is the starting wind speed (velocity)?
2
Wind Speed         Old formula         New Formula          Difference
2                   98.7538                100.697         -1.94316
*/
}
    
    
    
    
