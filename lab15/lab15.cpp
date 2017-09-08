/* Ruby Aguilar
September 7,2017
Lab 1.5 we are supposed to output a madlib with the appropriate words coming out in the appropriate spaces. 
*/

#include <iostream>
using namespace std;


int main()
{
    string adjOne;
    string adjTwo;
    string nounOne;
    string nounTwo;
    string pluralOne;
    string gameChoice;
    string pluralTwo;
    string verbingOne;
    string placeChoice;
    string adjThree;
    string numberChoice;
    string pluralThree;
    
    cout << "Give me an adjective"<< endl;
    cin >> adjOne;
    
    cout << "Give me another adjective" << endl;
    cin >> adjTwo;
    
    cout << "Give me a noun" << endl;
    cin >> nounOne;
    
    cout << "Give me another noun" << endl;
    cin >> nounTwo;
    
    cout << "Give me a plural noun" << endl;
    cin >> pluralOne;
    
    cout << "Name any game" << endl;
    cin >> gameChoice;
    
    cout << " Give me a plural noun" << endl;
    cin >> pluralTwo;
    
    cout << " Give me the name of a place" << endl;
    cin >> placeChoice;
    
    cout << " Give me another verb ending in -ing" << endl;
    cin >> verbingOne;
    
    cout << " Give me an adjective" << endl;
    cin >> adjThree;
    
    cout << "Give me a number" << endl;
    cin >> numberChoice;
    
    cout << "Lastly, give me one more plural noun" << endl;
    cin >> pluralThree;
    
    cout << " A vacation is when you take a trip to some " << adjOne << " place with your " << adjTwo << " family." << endl;
    cout << "Usually you go to the same place that is near a/an " << nounOne << " or up on a /an " << nounTwo << "." << endl;
    cout << "A good vacation place is one where you can ride " << pluralOne << " or play " << gameChoice << " or go hunting for " << pluralTwo << "."<< endl;
    cout << "My family is going to go to (the) " << placeChoice << ", and I will practice " << verbingOne << "." <<endl;
    cout << "Parents need vacations more than kids because parents are always very " << adjThree << " and because they have to work " << numberChoice << " hours everyday all year making enough " << pluralThree << " to pay for vacation." << endl;
  
  
  /*   Outcome of code asked all the questions
Give me an adjective
Give me an adjective
Give me another adjective
Give me a noun
Give me another noun
Give me a plural noun

*/
}
    
    
    
    