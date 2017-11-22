/* Ruby Aguilar
November 19, 2017
Assignment 4:This program will read in student answersPreview the documentView in a new window for a test and compare the answers 
to the corresponding answer keyPreview the documentView in a new window for the test.  1 point is awarded for each correct answer, 
omitted answers get 0 points, and incorrect answers deduct ¼ point.  The program should output to the screen and a file the student’s 
name, list of missed questions, and overall grade on the exam.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

   int main(){
       
    string line;
   ifstream fin; 
   ofstream fout; 
   
   float studentScore;
   int incorrectAnswers;
   string firstName;
   string lastName;
   char blank = "?";
   
   fin.open("answerkey.txt");  
   fin.open("studentanswers.txt");

while(!fin.eof()){
    getline(fin, line);
      if (fin==fin){
          
        studentScore= studentScore + 1;
      }
      else if (fin == blank){
          studentScore = studentScore ;
          incorrectAnswers = incorrectAnswers + 1;
      }
    else {
        incorrectAnswers= incorrectAnswers + 1;
        studentScore= studentScore -.25;
    }
}

      fout << firstName<< " "<< lastName << ":" << endl;
      fout << "Your score is " << studentScore << "." << endl;
      fout << "You had " << incorrectAnswers << "answers." << endl;
    fin.close();
   fout.close();

       return 0;
       
   }


