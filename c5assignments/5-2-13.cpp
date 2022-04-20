/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int arrayTest [3][3][2] = 
    {
{     {0, 0}, {0, 1}, {0, 2},    },
{     {1, 0}, {1, 1}, {1, 2},
      {2, 0}, {2, 1}, {2, 2}   }
};
            
   
    
   for (int i=0;i<4;i++){
       for (int j=0;j<3;j++){
           for (int f=0;f<2;f++){
           cout << '{' << j << "," << f << "," << i << '}' << endl;
       }
}
}

    return 0;
}


//not finished.