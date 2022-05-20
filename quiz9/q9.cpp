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
    int date2;
    int date3;
};



int makeEmployeeStructArray(Employees e[], int maxemployeeNum);
void printEmployee(Employees e);
void findEmployee(Employees e[], int maxemployeeNum);




int main()
{
   Employees e[50];
  
   
   int maxemployeeNum;
   maxemployeeNum = makeEmployeeStructArray(e, 50);

    findEmployee(e , maxemployeeNum);
    
   
  
}


int makeEmployeeStructArray(Employees e[], int maxemployeeNum){
    

    ifstream ifs;
    int idx;
    
     ifs.open("employee.txt");
    if (ifs){
        idx = 0;
        for (int i = 0; i < maxemployeeNum; i++){
            ifs >> e[idx].id >> e[idx].name1 >> e[idx].name2 >> e[idx].salary >> e[idx].depName >> e[idx].date >> e[idx].date2 >> e[idx].date3;
             idx += 1;
        }
        }
    
        return idx;
    }
   void findEmployee(Employees e[], int maxemployeeNum){
       
       cout << "qualified employees:\n\n";
       for (int i=0;i < maxemployeeNum;i++){
           if (e[i].salary > 100000 && e[i].depName == "Computer"){
             
                 printEmployee(e[i]);
                  
           }
     }
   }
    
    void printEmployee(Employees e){
    cout << "ID: " <<  e.id << " Name: " << e.name1 << " " << e.name2 << " Salary: $" << e.salary << " Department: " << e.depName << " Date: " << e.date << " " << e.date2 << " " << e.date3 << "\n";
 
    }
    
    
