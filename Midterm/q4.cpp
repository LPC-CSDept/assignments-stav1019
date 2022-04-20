#include <iostream>
#include <ctime>
#include <time.h>


using namespace std;


int x;
int y;
int z;

int getRdnum(){
    
     srand(time(0));
    
    
    x = (rand() % 50) + 1;
   
    
    return x;
   
}
int main()
{
    srand(time(0));
    cout << getRdnum();

    return 0;
}