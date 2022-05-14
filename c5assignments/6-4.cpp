#include <cmath>
#include <iostream>
using namespace std;


const int N = 5;
int number[N] = {2, 1, 5, 10, 7};
int minNum = 100;
int maxNum = 0;
int totalSum = 0;
int finalSum = 0;
//int findmax(int number[], int from, int to);

int getSum(){
  
    for (int i=0;i<N;i++){
        if (number[i] < minNum){
            minNum = number[i];
        }
        else if (number[i] > maxNum){
            maxNum = number[i];
        }
        else {
            minNum = minNum;
            maxNum = maxNum;
            
        }
        
    
    }
    
     
    
    return 0;
}
    
    


int main(){
    
  getSum();
  
  totalSum = number[0] + number[1] + number[2] + number[3] + number[4];
        finalSum = totalSum - minNum - maxNum;
  
  
  cout << "final sum minus the minimum and maximum value:" << finalSum << endl;
  
    }

 
    //int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};



