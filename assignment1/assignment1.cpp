/*Ruby Aguilar
September 12, 2017
1.0 assignment calculators - creare a calculator that determines BMI and how much of one object a person should eat a day to maintain their weight.
*/

#include <iostream>
#include <string>
using namespace std;

struct person{
    string firstName;
    string lastName;
    string foodType;
};

int main (){
    int heightFeet = 0;
    int heightInches = 0;
    int weightPounds = 0;
    int ageYrs = 0;
    int caloriesSnickers = 280;
    float mifflinCalories = 0.0;
    float harrisCalories = 0.0;
    float eatSnickers = 0.0;
    float bodyMass = 0.0;
    
   person personA;
   cin >> personA.firstName;
   cin >> personA.lastName;
   cin >> personA.foodtype;
   
   cout<< "What is your height (feet only, remainder in inches is next question)?"<<;
   cin >> heightFeet;
   
   cout << "What is your height (inches left over)?"<<;
   cin >> heightInches;
   
   cout << "What is your weight in pounds (rounded to the nearest number)?"<<;
   cin >> weightPounds;
   
   cout << " What is your age ( in years)?"<<;
   cin >> ageYrs;
   
   mifflinCalories = 10 * (weightPounds/2.2) + 6.25 * ((heightFeet*30.48)+(heightInches*2.54)) - 5 *ageYrs - 161;
   harrisCalories = 655.1 + (4.35 * weightPounds) + (4.7 * ((heightFeet*12)+heightInches)) - (4.7 * ageYrs);
   bodyMass = 703 * ((weightPounds)/(((heightFeet*12)+heightInches) * ((heightFeet*12)+heightInches));
   eatSnickers = mifflinCalories / caloriesSnickers
   
   cout<<personA.firstName<<;
   cout<<personA.lastNAme<<endl;
   cout<< ageYrs << " years old." << endl;
   cout<< heightFeet<<"''"<<heightInches<<"'"<<endl;
   cout<<weightPounds<<"lbs"<<endl;
   cout<<"Your BMI is " <<bodyMass<<"."<<endl;
   cout<<"Your Mifflin Calories are " << mifflinCalories << "."<<endl;
   cout<<"Your Harris Calories are" << harrisCalories << "." << endl;
   cout<< "You should eat " << eatSnickers << " snickers to maintain your current weight."<< endl;
   
}
  