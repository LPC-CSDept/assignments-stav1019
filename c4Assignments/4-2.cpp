

#include <iostream>
using namespace std;

int main()
{
   
   
   int num1, num2, num3;
   
   cout << "Please enter 3 numbers:\n";
   
   cin >> num1 >> num2 >> num3;
   
  
   
   if (num1 > num2 && num1 > num3 && num2 > num3)
   {
       cout << "The smallest number is: " << num3 << "\nThe second smallest largest number is: " << num2 << "\nThe largest number is: " << num1;
   }
   else if (num1 > num2 && num1 > num3 && num3 > num2)
   {
       cout << "The smallest number is: " << num2 << "\nThe second smallest number is: " << num3 << "\nThe largest number is: " << num1;
   }
   else if (num2 > num1 && num2 > num3 && num1 > num3)
   {
        cout << "The smallest number is: " << num3 << "\nThe second smallest number is: " << num1 << "\nThe largest number is: " << num2;
   }
   else if (num2 > num1 && num2 > num3 && num3 > num1)
   {
        cout << "The smallest number is: " << num1 << "\nThe second smallest number is: " << num3 << "\nThe largest number is: " << num2;
   }
   else if (num3 > num1 && num3 > num2 && num1 > num2)
   {
        cout << "The smallest number is: " << num2 << "\nThe second smallest number is: " << num1 << " \nThe largest number is: " << num3;
   }
   else if (num3 > num1 && num3 > num2 && num2 > num1)
   {
        cout << "The smallest number is: " << num1 << "\nThe second smallest number is: " << num2 << " \nThe largest number is: " << num3;
   }
       

   
   
return 0;
     
}
