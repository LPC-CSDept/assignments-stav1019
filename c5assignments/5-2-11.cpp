#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   
   int begin;
   int end;
   int i;
   int sum;
   
   cin >> begin >> end;
   
   if (begin > end)
   {
       cout << "Boundaries are invalid" << endl;
       cin >> end;
   }
      else
   {
       
       for(i=begin;i<end;i++)
       {
           for (int j=2;j<(i/2);j++)
           {
               if (i % j)
               {
                   break;
               }
               if (j > i/2)
               {
                   cout << i << endl;
               }
           }
       }
   }
               
                
              
return 0;
}

//double check if working supposed to prime number man.