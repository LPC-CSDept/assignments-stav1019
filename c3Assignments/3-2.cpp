#include <iostream>
using namespace std;

int main()
{
   
  int males;
  int females;
  int students = males + females;
  
     cout << "How many males and females are in the class?";
   cin >> males >> females;
   
   int malePercent = males/students;
   int femalePercent = females/students;
  
 
   cout << "The percentage of males in the class is:" << malePercent << "%" << endl;
   cout << "The percentage of females in the class is:" << femalePercent << "%" << endl;

   
   
return 0;
     
}
