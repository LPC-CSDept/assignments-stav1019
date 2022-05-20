#include <iostream>
#include <fstream>

using namespace std;


struct Employees{
    int id;
    string name;
    int salary;
    string depName;
    string date;

};

int main()
{
   Employees e[50];
    
}

int makeEmployeeStructArray(Employees e[]){
    
    ifstream ifs;
    int idx;
    
     ifs.open("employee.txt");
    if (ifs){
        idx = 0;
        ifs >> e[idx].id >> e[idx].name >> e[idx].salary >> e[idx].depName >> e[idx].date;
             idx += 1;
        }
    
        return idx;
    }