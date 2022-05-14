#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int n1, n2, n3;
int minVal;

void getRandnum(int &n1, int &n2, int &n3){
  
       srand(time(0));
  
       n1 = (rand() % 100) + 1;
       n2 = (rand() % 100) + 1;
       n3 = (rand() % 100) + 1;
       
         cout << n1 << "\n" << n2 << "\n" << n3;
}

int findMin(int n1, int n2, int n3){
    
    int minVal;
    
    if (n1 <= n2 && n1 <= n3){
        min = n1;
    }
    else if (n2 <= n1 && n2 <= n3){
        min = n2;
    }
    else if (n3 <= n1 && n3 <= n2){
        min = n3;
    }
    
    
    return minVal;
}


int main()
{
    
    
    
   getRandnum(n1, n2, n3);
   findMin(n1, n2, n3);
   
   cout << "min: " << minVal;
    
    
    return 0;
}
