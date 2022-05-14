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
       
       
}

int findMin(int newN1, int newN2, int newN3){
    
    int minVal;
    
    if (n1 <= n2 && n1 <= n3){
        minVal = n1;
    }
    else if (n2 <= n1 && n2 <= n3){
        minVal = n2;
    }
    else if (n3 <= n1 && n3 <= n2){
        minVal = n3;
    }
    
    x = minVal;
    
    
    
    return x;
}
void printResult(int n1, int n2, int n3, int x){
    cout << n1 << "\n" << n2 << "\n" << n3;
    cout << "\nmin: " << x;
}

int main()
{
    
   getRandnum(n1, n2, n3);
   
   findMin(n1, n2, n3);
   
   printResult(n1, n2, n3, x);
   
      return 0;
}
