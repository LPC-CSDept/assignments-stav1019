#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <time.h>


using namespace std;



int num = 10;
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
    srand(time(0));
    for (int i=0;i<10;i++){
      
      
       int x = getRdnum();
       cout << x << ", ";
       if (isGreater(x,num) != num){
           file << num << ", " << endl;
       }
       
       //if (isGreater(x,num)){
           //num = x;
         //if (num != placeHolder  file << num << ", " << endl;
      // }
    }
     file.close();
    
    
    
    //ofstream file ("numbers.txt");
    //file << getRdnum(); 
    
    }
    
   
    
