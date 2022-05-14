#include <iostream>

using namespace std;

int main()
{
    
   int userinput; 
   int circleRadius;
    
    
    
    cout << "Geometry Calculator\n" << "\n1. Calculate the Area of a circle" << "\n2. Calculate the Area of a rectangle" << "\n3. Calculate the Area of a triangle" << "\n4. Quit" << "\n \nEnter you choice(1-4):"; 

     cin >> userinput;
     
     if (userinput == 1){
         cout << "please enter the radius of the circle: ";
         cin >> circleRadius;
         
           if (circleRadius < 0){
             cout << "error: input must be positive";
             exit(0);
         }
         else {
         
         int rSquared = pow(circleRadius, 2);
         double circleArea = rSquared * 3.14159;
         
         cout << "\ncircle area: " << circleArea;  
         }
         
    