/*Ruby Aguilar
September 5, 2017
Lab 1.4 creating a program that emulates the Coin Star Machine
*/

#include <iostream>
using namespace std;


int main()
{
    int numQuarters = 0;
    int numNickels = 0;
    int numDimes = 0;
    int numPennies= 0;
    int totalChange = 0;
    int totalChangeGiven = 0;
    double changeFee = 0.0;
    double returnedChange = 0.0;
    
    changeFee = .109;
    returnedChange = totalChange - (changeFee * totalChange);
    
    
    cout << "Please enter the total ammount of your change" << ;
    cin << totalChange << endl;
    
    returnedChange = totalChange - (changeFee * totalChange);
    totalChangeGiven = totalChange;
    
    cout << "You have entered " << totalChange << endl;
    
    numQuarters = totalChange / 25; // Calculating max ammount of quarters in the change
    totalChange = totalChange - (25*numQuarters); // calculating the change after max quarters has been removed from change
    
    numDimes = totalChange / 10; //Calculating max ammount of dimes in the change
    totalChange = totalChange - (10*numDimes); // calculating the change after max dimes has been removed from change
    
    numNickels = totalChange / 05; //Calculating max ammount of nickels in the change
    totalChange = totalChange - (05*numNickels); // calculating the change after max nickels has been removed from change
    
    numPennies = totalChange % 1; //Calculating max ammount of pennies in the change
    
    
    cout << "That is" << numQuarters << " quarters," << numDimes << " dime," << numNickels << " nickel, and" << numPennies << " pennies" << endl;
    
    
    cout << "The total is $0." << totalChangeGiven << "." << "After the fee you get $0" << returnedChange << " in cash."<< endl; 
    
    
}