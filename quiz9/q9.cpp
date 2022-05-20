#include <iostream>
#include <fstream>

using namespace std;




struct Employees{
    int id;
    string name;
    double salary;
    string depName;
    string date;
};






int main()
{
   Employees e[50];
  
   
   int maxemployeeNum;
   maxemployeeNum = makeEmployeeStructArray(e);
   
  



for (int i = 0; i < maxemployeeNum; i++){
        printEmployee(e[i]);
    }

    findEmployee(e);
    
   
  
}


int makeEmployeeStructArray(Employees e[]){
    

    ifstream ifs;
    int idx;
    
     ifs.open("employee.txt");
    if (ifs){
        idx = 0;
        for (int i = 0; i < maxemployeeNum; i++){
            ifs >> e[idx].id >> e[idx].name1 >> e[idx].salary >> e[idx].depName >> e[idx].date;
             idx += 1;
        }
        
        }
    
        return idx;
    }
   void findEmployee(Employees e[], int maxemployeeNum){
       for (int i=0;i < maxemployeeNum;i++){
           if (e[i].salary > 100000 && e[i].depName == "Computer"){
             
                 printEmployee(e[i]);
                 
           }
     }
   }
    
    void printEmployee(Employees e){
    cout << "ID: " <<  e.id << " Name: " << e.name1 << " salary: " << e.salary << " department: " << e.depName << " date: " << e.date;
  
    }
    

