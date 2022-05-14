#include <iostream>
#include <cmath>
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
         
     }
     else if (userinput == 2){
         
         int recLength;
         int recWidth;
         
         cout << "please enter the length of the rectangle: ";
         cin >> recLength;
         cout << "\nplease enter the width of the rectangle: ";
         cin >> recWidth;
         
           if (recLength < 0 || recWidth < 0){
             cout << "error: inputs must be positive";
             exit(0);
         }
         else {
         
         int recArea = recLength * recWidth;
         
         cout << "\nrectangle area: " << recArea;
         
     }
     }
     else if (userinput == 3){
         
         int triBase;
         int triHeight;
         
         cout << "please enter the height of the triangle: ";
         cin >> triHeight;
         cout << "\nplease enter the base length of the triangle: ";
         cin >> triBase;
         
         if (triBase < 0 || triHeight < 0){
             cout << "error: inputs must be positive";
             exit(0);
         }
         else {
              int triArea = triBase * triHeight * 0.5;
         
         cout << "\ntriangle area: " << triArea;
         }
          }
     else if (userinput == 4){
         
        
         cout << "program closing ";
        
        exit(0);
     }
     else if (userinput > 4){
         
        
         cout << "invalid selection, program closing ";
        
        exit(0);
     }

    return 0;
}
