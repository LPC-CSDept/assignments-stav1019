#include    <iostream>
using namespace std;


const int SIZE = 3;
    int numbers[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

void printtriangle(int numbers[][3], int);
int main()
{
    const int SIZE = 3;
    int numbers[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
    printtriangle(numbers, SIZE);
}
void printtriangle(int num[][3], int size)
{
   for (int i=0;i<1;i++){
       for (int j=0;j<1;j++){
           cout << numbers[i][j];
       }
       cout << endl;
   }
    for (int i=1;i<2;i++){
       for (int j=0;j<2;j++){
           cout << numbers[i][j];
       }
       cout << endl;
   }
    for (int i=2;i<3;i++){
       for (int j=0;j<3;j++){
           cout << numbers[i][j];
       }
       cout << endl;
   }
}

