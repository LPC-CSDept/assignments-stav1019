/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int packWeight, shipDistance; 
    double totalCharge;
    double shipRate;
    
    cout << "please enter package weight in kg: ";
    cin >> packWeight;
    cout << "\nplease enter shipping distance: ";
    cin >> shipDistance;
    
     if (packWeight <= 0 || packWeight > 20){
       cout << "package does not meet weight requirements. program closing";
       exit(0);
    }
    else if (shipDistance < 10 || shipDistance > 3000){
        cout << "we cannot ship to this location. program closing";
        exit(0);
    }
    
 
    if (packWeight <= 2){
        shipRate = 1.10;
        
        totalCharge = (shipDistance/500.00) * shipRate;
        cout << "\ntotal charge: $" << totalCharge;
    } 
    else if (packWeight > 2 && packWeight <= 6){
        shipRate = 2.20;
        
        totalCharge = (shipDistance/500.00) * shipRate;
        cout << "\ntotal charge: $" << totalCharge;
    }
    else if (packWeight > 6 && packWeight <= 10){
        shipRate = 3.70;
        
        totalCharge = (shipDistance/500.00) * shipRate;
        cout << "\ntotal charge: $" << totalCharge;
    }
    else if (packWeight > 10 && packWeight <= 20){
        shipRate = 4.80;
        
        totalCharge = (shipDistance/500.00) * shipRate;
        cout << "\ntotal charge: $" << totalCharge;
        
    }
   
    
    
    
    
    return 0;
}
