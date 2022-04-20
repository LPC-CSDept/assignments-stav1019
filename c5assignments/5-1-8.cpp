//assignment 5-1 = lab 5-7 & lab 5.8

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   
   int begin = 0;
   int end;
   int i;
   
   cin >> end;
   
   if (end > 1300 || end < 2)
   {
       cout << "Please re-enter an integer below 1300 and above zero" << endl;
       cin >> end;
   }
      else
   {
       
       for(i=1;pow(2,i)<end;i++)
       {
       cout << pow(2,i) << endl;
       }
   }
  
return 0;
}
