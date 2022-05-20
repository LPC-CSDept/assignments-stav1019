#include <iostream>
#include <fstream>

using namespace std;


struct Employees{
    int id;
    string name1;
    string name2;
    double salary;
    string depName;
    string date;

};

int makeEmployeeStructArray(Employees e[]);
void printEmployee(Employees e);
void findEmployee(Employees e[], int employeeNum);

int main()
{
   Employees e[1];
   int employeeNum;
   employeeNum = makeEmployeeStructArray(e);
   
  //makeEmployeeStructArray(Employees e[]);

    findEmployee(e , employeeNum);
    
    //for (int i = 0; i < employeeNum; i++){
      //  printEmployee(e[i]);
 //   }
  
}

int makeEmployeeStructArray(Employees e[]){
    
    ifstream ifs;
    int idx;
    
     ifs.open("employee.txt");
    if (ifs){
        idx = 0;
        ifs >> e[idx].id >> e[idx].name1 >> e[idx].name2 >> e[idx].salary >> e[idx].depName >> e[idx].date;
             idx += 1;
        }
    
        return idx;
    }
   void findEmployee(Employees e[], int employeeNum){
       int isPrinted = 0;
       for (int i=0;i < employeeNum;i++){
           if (e[i].salary > 100000){
                 printEmployee(e[i]);
                  isPrinted++ ;
           }
     }
   }
    
    void printEmployee(Employees e){
    cout << "ID: " <<  e.id << " Name: " << e.name1 << " " << e.name2 << " salary: " << e.salary << " department: " << e.depName << " date: " << e.date;
    //<< "\n" << e.depName << "\n" << e.depName << "\n" << e.id;
    }
    
    
   // e[idx].name 
   // e.name