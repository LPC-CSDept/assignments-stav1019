#include <iostream>
#include <ctime>
#include <time.h>


using namespace std;

int n1 = 10;
int n2 = 15;
int x;
int y;
int z;

int getRdnum(){
    
     srand(time(0));
    
    
    x = (rand() % 100) + 1;
   
    
    return x;
   
}
int getRdnum(int n2){
     
     y = (rand() % (n2)) + 1;
     
     return y;
}

int getRdnum(int n1, int n2)
{
    
    z = (rand() % (n2 - n1)) + (n1 + 1);
   
   return z;
   // return (rand() % n2) + n1;
}
int main()
{
    srand(time(0));
    cout << getRdnum();

    return 0;
}
