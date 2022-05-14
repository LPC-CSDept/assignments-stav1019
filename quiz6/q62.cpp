#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int n1, n2, n3;
int minVal;
int x;

void getRandnum(int &n1, int &n2, int &n3){
  
       srand(time(0));
  
       n1 = (rand() % 100) + 1;
       n2 = (rand() % 100) + 1;
       n3 = (rand() % 100) + 1;
       
         cout << n1 << "\n" << n2 << "\n" << n3;
}

int findMin(int newN1, int newN2, int newN3){
    
    int minVal;
    
    if (newN1 <= newN2 && newN1 <= newN3){
        minVal = newN1;
    }
    else if (newN2 <= newN1 && newN2 <= newN3){
        minVal = newN2;
    }
    else if (newN3 <= newN1 && newN3 <= newN2){
        minVal = newN3;
    }
    
    x = minVal;
    
    //cout << "\nyo: " << minVal;
    
    return x;
}


int main()
{
    
    
    
   getRandnum(n1, n2, n3);
   
   int newN1 = n1;
   int newN2 = n2;
   int newN3 = n3;
   
   //cout << newN1;
   
   findMin(newN1, newN2, newN3);
   
   //int x = minVal;
   
   
   cout << "\nmin: " << x;
    
    
    return 0;
}
