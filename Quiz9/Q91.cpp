#include <iostream>
#include <fstream>

using namespace std;


struct Employees{
    int id;
   // string name;
    double salary;
    string depName;
    string date;

};

int makeEmployeeStructArray(Employees e[]);
void printEmployee(Employees e);

int main()
{
   Employees e[1];
   int employeeNum;
   employeeNum = makeEmployeeStructArray(e);
    
    for (int i = 0; i < employeeNum; i++){
        printEmployee(e[i]);
    }
   //printEmployees(e[i]);
    //cout << e.id << "\n" << e.name << "\n" << e.salary << "\n" << e.depName << "\nsum: " << e.date;
    
}

int makeEmployeeStructArray(Employees e[]){
    
    ifstream ifs;
    int idx;
    
     ifs.open("employee.txt");
    if (ifs){
        idx = 0;
        ifs >> e[idx].id >> e[idx].salary >> e[idx].depName >> e[idx].date;
             idx += 1;
        }
    
        return idx;
    }
 //void findEmployee(Employees e[], int numofRecords, string username);   
    
    void printEmployee(Employees e){
    cout << e.id << "\n" << e.salary << "\n" << e.depName << "\n" << e.date;
    }
    
    
   // e[idx].name 
   // e.name