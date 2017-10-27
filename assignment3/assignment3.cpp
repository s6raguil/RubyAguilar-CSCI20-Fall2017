/* Ruby Aguilar
october 25,2017
*/
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

    int processSpin(int spinResult, int basket);
    int getRandomNumInRange(int low, int high);

int main() {
	string playerName;
	srand(time(0));

    cout<< "Welcome to Hl HO! CHERRY-O" <<endl;
    cout<< "Enter Player name: " << endl;
	cin >> playerName;

    cout<< "Spinning..." <<endl;
    int playerBasket = 0;
    int computerBasket = 0;
    int spinResult;  //loop until computer or player wins 
    while (playerBasket < 10 && computerBasket < 10)
	{
	
		spinResult = getRandomNumInRange(1, 7);	//player turn get random number from 1 to 7 the spinner is divided into seven sections
		cout<< playerName <<"'s spin: "<< endl;
		playerBasket = processSpin(spinResult, playerBasket);//if the player has at least that many in his/her basket, one if he/she has only one (no effect if player's basket is empty)
		if(playerBasket<0){
		playerBasket=0;
		cout << playerName << "'s basket: " << playerBasket<<endl;
		}
		else if(playerBasket>=10) 
		{
			cout << playerName << " won!";
			break;
		}
		
	
	   while (playerBasket < 10 && computerBasket < 10)
		{
			spinResult = getRandomNumInRange(1, 7);//spin for computer
			cout<< "Computer's spin: "<<endl;
			computerBasket = processSpin(spinResult, computerBasket);	//if the player has at least that many in his/her basket one if he/she has only one (no effect if player's basket is empty)
			
			if(computerBasket<=0){
			    computerBasket=0;
			cout<<"Computer's basket: "<< computerBasket<<endl;
			}
			else if(computerBasket>=10);{
				cout << "Computer won!" << endl;
				break;
			}
		}
    }
	
	return 0;
}

/*
     
    Take one cherry from tree 
    Take two cherries from tree 
    Take three cherries from tree 
    Take four cherries from tree 
    Dog: Replace cherries on tree: two
    if the player has at least that many in his/her basket, one if he/she has
    only one (no effect if player's basket is empty) 
    Bird: Same as dog
    Spilled basket: Replace all cherries on tree
     
    */
int processSpin(int spinResult, int basket) {
    if (spinResult==1) {
       cout<<"Take one cherry from tree"<<endl;
        return 1;
    }else if (spinResult==2) {
        cout<<"Take two cherries from tree"<<endl;
        return 2;
    }else if (spinResult==3) {
        cout<<"Take three cherries from tree"<<endl;
        return 3;
    }else if (spinResult==4) {
        cout<<"Take four cherries from tree"<<endl;
        return 4;
    }else if (spinResult==4) {
        cout<<"Take four cherries from tree"<<endl;
        return 4;
    }else if (spinResult==5) {
        cout<<"Dog: Replace cherries on tree: two"<<endl;
        return -2;
    }else if (spinResult==6) {
        cout<<"Bird: Replace cherries on tree: two"<<endl;
        return -2;
    }else {
       cout<<"Spilled basket: Replace all cherries on tree"<<endl;
        return -basket;
    }
        
}


int getRandomNumInRange(int low, int high) {
    return low + (int) (rand() % ((high - low) + 1)); // random number generator
}



/*Take two cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take two cherries from tree
Computer's spin: 
Take three cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Dog: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Dog: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Spilled basket: Replace all cherries on tree
Computer's basket: 0
Computer won!
Ruby's spin: 
Bird: Replace cherries on tree: two
Ruby's basket: 0
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take two cherries from tree
Computer won!
Take one cherry from tree
Computer's spin: 
Take one cherry from tree
Computer won!
Ruby's spin: 
Ruby's spin: 
Take four cherries from tree
Computer's spin: 
Take four cherries from tree
Computer won!
Ruby's spin: 
Take three cherries from tree
Computer's spin: 
Bird: Replace cherries on tree: two
Computer's basket: 0
Computer won!
Ruby's spin: 
Spilled basket: Replace all cherries on tree
Ruby's basket: 0
Computer's spin: 
Take two cherries from tree
Computer won!
Ruby's spin: 
Take one cherry from tree
Computer's spin: 
Take four cherries from tree
*/