#include <cmath>
#include <iostream>
using namespace std;

//const int N = 10;
 //int i;
 int printNum;
 //int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
const int N = 10;
int i;
 int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

int firstDiff = abs(number[0]-number[1]);
int lastDiff = abs(number[9]-number[8]);



int isValid(){
    
if (firstDiff < 10){
    cout << number[0] << " ";
}


    for (int i=0;i<N;i++){
//if (abs(number[0]-number[1]) < 10) {
    //cout << number[0] << " ";
  if (abs(number[i]-number[i+1]) < 10 && (number[i]-number[i-1]) < 10) {
            cout << number[i] << " ";
//}
}
}

if (lastDiff < 10){
    cout << number[9] << " ";
}


return 0;
}

int main(){
    
    isValid();
    
    }

 
    //int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};



