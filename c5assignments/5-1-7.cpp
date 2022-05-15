//assignment 5-1 = lab 5-7 & lab 5.8

#include <iostream>
using namespace std;

int main()
{
   
   int n;
   int num;
   int nthPower = 1;
   float invertnthPower;
   
   cout << "please enter a number: ";
   cin >> n;
   
   if (n > 0)
   {
       num = n;
       for(int i=0;i<num;i++)
       {
       nthPower *=2;
       }
      cout << "2 to the power of " << n << " is: " << nthPower << endl;
   }
   else if (n<0)
   {
       num = n*-1;
       for(int i=0;i<num;i++)
       {
       nthPower *=2;
       }
       invertnthPower=1.0/nthPower;
        cout << "2 to the power of " << n << " is: " << invertnthPower << endl;
   }
   else 
   {
       cout << "number cannot be zero" << endl;
   }
   
   
  
return 0;
}
