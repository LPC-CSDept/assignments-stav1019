#include <iostream>
#include <fstream>



int main()
{
 ifstream ifs;
int numofStudents;
ifs.open("student.txt");

if (!ifs){
        cerr << "file open error\n";
        exit(0);
    }

