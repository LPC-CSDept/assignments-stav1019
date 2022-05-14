#include <iostream>

using namespace std;



void swapTwoValues(int n1, int n2){
  
      cout << "initial values: \nn1: " << n1 << "\nn2: " << n2 << "\n";    

    swap(n1, n2);
    
      cout << "swapped values: \nn1: " << n1 << "\nn2: " << n2 << "\n(int version of overloaded function)";  
}

void swapTwoValues(float n1, float n2){

        cout << "initial values: \nn1: " << n1 << "\nn2: " << n2 << "\n";  
      
       swap(n1, n2);
       
       cout << "swapped values: \nn1: " << n1 << "\nn2: " << n2 << "\n(float version of overloaded function)";  
}


int main()
{
    int intN1, intN2, int_result;
    float fN1, fN2, float_result;
    
    cout << "enter 2 integers(n1, n2):\n ";
    cin >> intN1 >> intN2;
    
    swapTwoValues(intN1, intN2);
    
    cout << "\n now, please enter 2 floats(n1, n2):\n ";
    cin >> fN1 >> fN2;
    
    swapTwoValues(fN1, fN2);
    
    
    return 0;
}
