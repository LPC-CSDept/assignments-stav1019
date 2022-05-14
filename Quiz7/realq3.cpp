#include <cmath>
#include <iostream>
using namespace std;


const int N = 10;
int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
int from = number[0];
int to = number[5];
int maxOne = 2;
int maxTwo = 0;
//int findmax(int number[], int from, int to);

int findMax(){
  
    for (int i=N/2;i<N;i++){
        if (number[i] > maxOne){
            maxOne = number[i];
        }
        else if (number[i] <= maxOne){
            maxOne = maxOne;
        }
    }
    
     for (int j=0;j<N/2;j++){
        if (number[j] > maxTwo){
            maxTwo = number[j];
        }
        else if (number[j] <= maxTwo){
            maxTwo = maxTwo;
        }
    }
    
    
    return 0;
}
    
    


int main(){
    
  findMax();
  
  cout << "maximum of all variables in first half of array:" << maxTwo << endl;
  cout << "maximum of all variables in second half of array:" << maxOne << endl;
    }

 
    //int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};



