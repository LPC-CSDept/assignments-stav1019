#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs;
    int numofStudents;
    int honors = 0;
    string studentName;
    double score1, score2;
    double sum, avg;

    ifs.open("students.txt");
    if (!ifs){
        cerr << "file open error\n";
        exit(0);
    }
    
    ifs >> numofStudents;

     for (int i=0;i<numofStudents;i++){
     ifs >> studentName >> score1 >> score2;
       sum = score1 + score2;
       avg = sum/2;
   
       if (avg > 80){
         honors++;
       }
       
           cout << "Student name: " << studentName << " Score 1: " << score1 << " Score 2: " << score2 << endl;
       cout <<" Sum: \t" << sum << " Average: \t" << avg << endl;
     }
 
  cout << "number of students with an average score of over 80: " << honors << endl;
    }









