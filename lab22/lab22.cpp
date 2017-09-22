/* Ruby Aguilar
September 21,2017
Lab 2.2 create a program that that contains a random number generationg function between 1-100 and then output that number.
*/

#include <iostream>
#include <cstdlib> // include libraries that contain the random number formula
#include <ctime>
using namespace std;

void GuessingGame () // call formula
{
    srand(time(0));
    int random_number = (rand() % 100) + 1; // initialize a value to the random number formula
    
    cout << " Your random number is "<< random_number << " ."<< endl; // outpu the number in a sentence
    
}

int main(){
    GuessingGame(); // main code goes after function 

}
