/*Ruby Aguilar
August 31, 2017
lab 1.3 
*/


#include <iostream>
using namespace std;


int main()
{
    
    int populationYear = 99; // years from now
    int birthRate = (60*60*24*365)/8; // birthrate is 1 baby every 8 sec
    int deathRate = (60*60*24*365)/12; // deathrate is 1 every 12 sec
    int netGainrate = (60*60*24*365)/12; // gain one person every 12 sec
    int migrantNetgain = (60*60*24*365)/33; // gain one migrant every 33 sec
    
    int usPopulation = 325778972;
    
    usPopulation = usPopulation + (populationYear * birthRate) - (populationYear * deathRate) + netGainrate + migrantNetgain ; // population in given or input years
    
    populationYear = populationYear + 2017; // adding years from now to current year
    
    cout << "In the year "<< populationYear << ", the population will be " << usPopulation << " in the United States.";
}

