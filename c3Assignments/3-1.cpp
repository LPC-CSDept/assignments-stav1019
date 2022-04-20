#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
  float inputA;
  float inputB;
  float inputC; 
   
     cout << "How many A, B, and C tickets were purchased?";
   cin >> inputA >> inputB >> inputC;
   
   float A = inputA * 15;
   float B = inputB * 12;
   float C = inputC * 9; 
   double total = A + B + C;
   
 
   cout << "A:" << A << endl;
   cout << "B:" << B << endl;
   cout << "C:" << C << endl;
   cout << "total ticket sales:" << fixed << setprecision(2) << total << "$" << endl; 
   
   
return 0;
     
}
