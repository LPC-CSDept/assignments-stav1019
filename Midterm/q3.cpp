#include <iostream>
#include <fstream>
#include <ctime>
#include <time.h>


using namespace std;


int N = 10;
int num = 0;
int x;
 int getRdnum(void){
     
      
     x = (rand() % 50) + 1;
      
      return x;
  }
  int isGreater(int a, int b){
     
    if (a > b){
        num = a;
        
       
     }
     else if (b > a){
         num = num;
         
     }
       return a,b;
     }
     


int main() {
    
    
    ofstream file ("numbers.txt");