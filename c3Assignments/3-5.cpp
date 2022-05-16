#include <iostream>
#include <ctime>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
     srand(time(0));
    
   double num1 = (rand() % 100) + 1;
   double num2 = (rand() % 100) + 1;
   double num3 = (rand() % 100) + 1;
   
   
  double sum = num1 + num2 + num3;
  double avg = (num1 + num2 + num3)/3;
  
  cout << "values: " << num1 << ", " << num2 << ", " << num3 << "\n" << "sum: " << sum << setprecision(5) << "\n" << "average: " << avg << setprecision(2);

  
}
