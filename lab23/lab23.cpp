/* Ruby Aguilar 
September 26, 2017
Lab 2.3 The purpose of this lab is to create a random number generator that recieves 2 numbers. puts the smallest number first and the largest second then generates a 'random' number between them and then outputs it to the screen
*/

#include <iostream>
#include <stdio.h>      
#include <stdlib.h>    
#include <time.h>
using namespace std;

void PrintRandom (int& smallest_number, int& biggest_number, int random_number)
{
    random_number = rand()%(biggest_number-smallest_number + 1) + smallest_number;
}

int main()
{
    int smallest_number = 0 ;
    int biggest_number = 0 ;
    int random_number = 0;
    
    rand()%(biggest_number-smallest_number + 1) + smallest_number;
    
    cout<< "Input a smaller number.";
    cin >> smallest_number;
    cout << "Input a bigger number.";
    cin >> biggest_number;
    
    random_number = rand()%(biggest_number-smallest_number + 1) + smallest_number;
    
    
    swap(smallest_number,biggest_number);
    swap(smallest_number,biggest_number);
    
cout << "A random number between " << smallest_number << " and " << biggest_number << " is " << random_number << " ." << endl;
    
}
/*Running /home/ubuntu/workspace/lab23/lab23.cpp
Input a smaller number.1
Input a bigger number.10
A random number between 1 and 10 is 7 .
 
Running /home/ubuntu/workspace/lab23/lab23.cpp
Input a smaller number.5
Input a bigger number.82
A random number between 5 and 82 is 27 .



 */





