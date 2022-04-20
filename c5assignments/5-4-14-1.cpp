#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <time.h>



using namespace std;

int main () {

int n;

cout << "How many random numbers would you like to generate?" << endl;

cin >> n;
    
    
    
    srand(time(0));
    int value;
    ofstream file ("testfile.txt");

    int i = 0;
    while (i < n)
    {
         
        i++;
        cout << i;
        file << (rand() % 1000) + 1 << "\n";
        
    }
    file.close();
    
}



    


