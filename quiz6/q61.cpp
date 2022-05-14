#include <iostream>

using namespace std;



void swapTwoValues(int n1, int n2){
  
     
    swap(n1, n2);
    
      
}

void swapTwoValues(float n1, float n2){

      
      
       swap(n1, n2);
       
        
}


int main()
{
    int intN1, intN2, int_result;
    float fN1, fN2, float_result;
    
    cout << "enter 2 integers(n1, n2):\n ";
    cin >> intN1 >> intN2;
    
    swapTwoValues(intN1, intN2);
    
   
    return 0;
}
