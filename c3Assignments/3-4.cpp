

#include <iostream>
using namespace std;

int main()
{
   
  string month1, month2, month3; 
  double rain1, rain2, rain3;
  double avgrain;
  cout << "Enter the first month, and its monthly average rainfall: \n"; 
  cin >> month1 >> rain1;
  cout << "Enter the second month, and its monthly average rainfall: \n"; 
  cin >> month2 >> rain2;
  cout << "Enter the third month, and its monthly average rainfall: \n"; 
  cin >> month3 >> rain3;
  avgrain = (rain1 + rain2 + rain3)/3; 
 
 
 
 cout << "The average rainfall across the months of " << month1 << ", " << month2 << ", and " << month3 << " is: " << avgrain << endl;



   
   
return 0;
     
}
