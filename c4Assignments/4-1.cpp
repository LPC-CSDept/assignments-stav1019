#include <iostream>
using namespace std;

int main()
{
   
   
   int num1, num2;
   
   cout <<"Please enter 2 different numbers: \n";
   
   cin >> num1 >> num2;
   
   if (num1 > num2) 
   {
       cout << "The larger number is: " << num1 << "\nThe smaller number is: " << num2 << endl;
   }
    else 
   {
       cout << "The larger number is: " << num2 << "\nThe smaller number is: " << num1 << endl;
   }
 
       

   
   
return 0;
}
