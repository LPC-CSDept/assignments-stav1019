#include <iostream>
#include <fstream>

using namespace std;


int evenSumList = 0;
int oddSumList = 0;
int currentVal;
int input;
int currentInput;

int evenSumGet(int input){
   
   //cout << "function says input is: " << input;
   
    evenSumList = evenSumList + input;
    
    cout << "Current Even summation: " << evenSumList << "\n";

    return 0;
}

int oddSumGet(int input){
    oddSumList = oddSumList + input;
    
    cout << "Current Odd summation: " << oddSumList << "\n";
    
    return 0;
}



int main()
{
    
    //int evenSumList = 0;
//int oddSumList = 0;
  

do {
    cout << "Please enter a number: " ;
    cin >> input;
   // cout << "input is " << input << "\n";
    if (input == -1){
        break;
    }
    else if (input % 2 == 0){
        evenSumGet(input);
        
    }
    else {
        oddSumGet(input);
        
    }  
  
} while (1); 
  


   
     
     cout << "Final Odd Summation: " << oddSumList;
     cout << "\nFinal Even Summation: " << evenSumList;
}
    

    