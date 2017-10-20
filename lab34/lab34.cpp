/* Ruby Aguilar
October 10, 2017
Lab 3.4 Debugging: The purpose of the program is to find all the flaws in the program and solve then fix them.   */

/*
Sum of numbers 
Write a program that reads in positive integers from the user, each separated by a space, 
and the whole terminated by a negative number (e.g. 3 22 10 -2),and outputs the sum of the
numbers entered (notincluding the terminated negative number!).*/

#include <iostream>
using namespace std; 
int main(){
        // initialization
        int num=0;
        int sum=0;
        cout << "Enter numbers separated by spaces" << " and terminated with a negative number." << endl;
         
         while (num >= 0)
        {
            cin >> num;
         
             if (num< 0)
             {
                 break;
             }
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               
        }
                cout << "Sum was " << sum << endl;
                return 0;
}
/* Enter numbers separated by spaces and terminated with a negative number.
5 8 7 3 -2
Sum was 23


Process exited with code: 0

*/
