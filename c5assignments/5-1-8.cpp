//assignment 5-1 = lab 5-7 & lab 5.8

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   
   int begin;
   int end;
   int i;
   
   cout << "please enter a beginning value and click enter, then an end value, to make the range: ";
   cin >> begin;
   cin >> end;
   
   if (end > 1300 || end < 2)
   {
       cout << "invalid range, please try again: "  << endl;
       cin >> begin;
       cin >> end;
   }
      if (begin > 1300 || begin < 2)
   {
       cout << "invalid range, please try again: " << endl;
       cin >> begin;
       cin >> end;
   }
      if (begin >= end)
      {
            cout << "invalid range, please try again: " << endl;
       cin >> begin;
       cin >> end;
      }
   
      else
   {
       
       for(i=1;pow(2,i)<end;i++)
       {
           if (pow(2,i) >= begin){
                cout << pow(2,i) << endl;
           } 
      
       }
   }
  
return 0;
}
