
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;


int main()

{
srand(time(0));
int targetNum = (rand() % 1000) + 1;
int userGuess;
int triesAllowed = 5;
int i;
int count = 1;


    cout << "A random number from 1-1000 has been generated (" << targetNum << ") You have " << triesAllowed << " tries. Please make a guess!:" << endl;
    cin >> userGuess;




       for (i=1;i<triesAllowed;i++){
            if (userGuess < targetNum){
              
            cout << "Too low, tries remaining: " << triesAllowed - i << " Please try again:" << endl;
           cin >> userGuess;
             count++;
           
       }
      else if (userGuess > targetNum){
          
           cout << "Too high, tries remaining: " << triesAllowed - i << " Please try again:" << endl;
           cin >> userGuess;
           count++;
           }
    
           
       }
            



if (userGuess == targetNum){
    cout << "Correct! The number was " << targetNum << ". You guessed the number in " << count << " tries." << endl;
}
    else { 
        cout << "\nIncorrect. Better luck next time!" << endl;
}




    return 0;
}
