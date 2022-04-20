//5

#include <iostream>
#include <fstream>

using namespace std;


int num1;
int num2;
int divResult;

int getInput()
{
    
   
    cout << "Please enter 2 different numbers: \n" ;

      cin >> num1 >> num2;
      
    

    return num1,num2;
}

int isSame(){
    if (num1 == num2){
    cout << "program closing";
    exit(0);
}
return 0;
}

int intDivision(){
    if (num1 > num2){
        divResult = num1/num2;
    }
    else if (num2 > num1){
        divResult = num2/num1;
    }
    return 0;
}



int main()
{
   ofstream file ("question5.txt");
   
  do{
    getInput();
    isSame();
    intDivision();
    file << divResult << ", " << endl;}
    while (num1 != num2);
  
  file.close();
}






