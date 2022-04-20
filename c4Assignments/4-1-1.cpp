#include <iostream>
using namespace std;

int main()
{
   
   int unitNum;
   float initialPrice;
   float finalPrice;
   float discountIs;
   cout <<"Please enter the number of units sold: \n";
   
   cin >> unitNum;
   
   if (unitNum >= 0 && unitNum <= 19) 
   {
       initialPrice = unitNum * 99;
       discountIs = (initialPrice * 0.20);
       finalPrice = initialPrice - discountIs;
       cout << "Original price: $" << initialPrice << "\n" << "Discount applied: $" << discountIs << "\n" << "Final Price: $" << finalPrice << endl;
   }
    else if (unitNum >= 20 && unitNum <= 49) 
   {
       initialPrice = unitNum * 99;
       discountIs = (initialPrice * 0.30);
       finalPrice = initialPrice - discountIs;
       cout << "Original price: $" << initialPrice << "\n" << "Discount applied: $" << discountIs << "\n" << "Final Price: $" << finalPrice << endl;
   }
    else if (unitNum >= 50 && unitNum <= 99) 
   {
       initialPrice = unitNum * 99;
       discountIs = (initialPrice * 0.40);
       finalPrice = initialPrice - discountIs;
       cout << "Original price: $" << initialPrice << "\n" << "Discount applied: $" << discountIs << "\n" << "Final Price: $" << finalPrice << endl;
   }
    else if (unitNum >= 100) 
   {
       initialPrice = unitNum * 99;
       discountIs = (initialPrice * 0.50);
       finalPrice = initialPrice - discountIs;
       cout << "Original price: $" << initialPrice << "\n" << "Discount applied: $" << discountIs << "\n" << "Final Price: $" << finalPrice << endl;
   }
   else if (unitNum <= 0)
   {
       cout << "Please enter a positive value." << endl;
   }
       
       

   
   
return 0;
}
