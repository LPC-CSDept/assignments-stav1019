#include <iostream>
using namespace std;

int main()
{
   double shipDistance;
   double packWeight;
   double shipCost;
   cout << "Please enter the weight of the package in kilograms: \n";
   
   cin >> packWeight;
   
   cout << "Please enter the shipping distance in miles: \n";
   
   cin >> shipDistance;
       
    if (packWeight >= 0 && packWeight <= 2 && shipDistance >= 500) 
   {
       shipCost = shipDistance/500 * 1.10;
        cout << "Package Weight: " << packWeight << " kg \n" << "Shipping Distance: " << shipDistance << " miles \n" << "Shipping Cost: $" << shipCost << endl;
   }  
    else if (packWeight > 2 && packWeight <= 6 && shipDistance >= 500) 
   {
       shipCost = shipDistance/500 * 2.20;
        cout << "Package Weight: " << packWeight << " kg \n" << "Shipping Distance: " << shipDistance << " miles \n" << "Shipping Cost: $" << shipCost << endl;
   }  
    else if (packWeight > 6 && packWeight <= 10 && shipDistance >= 500) 
   {
       shipCost = shipDistance/500 * 3.70;
        cout << "Package Weight: " << packWeight << " kg \n" << "Shipping Distance: " << shipDistance << " miles \n" << "Shipping Cost: $" << shipCost << endl;
   }  
   else if (packWeight > 10 && packWeight <= 20 && shipDistance >= 500) 
   {
       shipCost = shipDistance/500 * 4.80;
        cout << "Package Weight: " << packWeight << " kg \n" << "Shipping Distance: " << shipDistance << " miles \n" << "Shipping Cost: $" << shipCost << endl;
   }  
   else if (packWeight < 0 || packWeight > 20 || )
   {
       cout << "Please enter a positive value." << endl;
   }
       
       

   
   
return 0;
}
