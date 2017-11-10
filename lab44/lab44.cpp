/* Ruby Aguilar
November 5,2017
4.4*/

#include <iostream>
#include  <cstring>
using namespace std;

int main()
{
    char firstName[10];
    char lastName[20];
    int size = 0;
    
    StartAgain: // if too many characters input it will bring the person back to the beginning after telling them whgat went wrong
    
    cout << "Enter your first name (no more than 10 characters)"<< endl;
    cin >> firstName;
    
    size = strlen (firstName);
    if(size>=10){ // if it has to many characters it will warn user
        cout<< "Too many characters"<< endl;
        goto StartAgain;  
    }

    cout << "Enter your last name (no more than 20 characters)"<<endl;
    cin >> lastName;
    
    size = strlen (lastName);
    if(size>=20){
        cout<< "Too many characters"<< endl;
        goto StartAgain;
    }
     
    
     cout<< "Name:" << firstName << " " << lastName << endl;
     cout<< "Which of the three user names would you like:" << endl;
    
     cout<< firstName[0] << firstName[1]<< lastName <<endl;
     cout<< firstName << lastName<<endl; // printing output of different usernames
     cout<< firstName[0] << lastName<<endl;
     
}

/*
Enter your first name (no more than 10 characters)
ruby
Enter your last name (no more than 20 characters)
aguilar
Name:ruby aguilar
Which of the three user names would you like:
ruaguilar
rubyaguilar
raguilar

Enter your first name (no more than 10 characters)
April       
Enter your last name (no more than 20 characters)
Browne
Name:April Browne
Which of the three user names would you like:
ApBrowne
AprilBrowne
ABrowne

Enter your first name (no more than 10 characters)
AnaElizabeth
Too many characters
Enter your first name (no more than 10 characters)


Enter your first name (no more than 10 characters)
James
Enter your last name (no more than 20 characters)
James
Name:James James
Which of the three user names would you like:
JaJames
JamesJames
JJames

*/


