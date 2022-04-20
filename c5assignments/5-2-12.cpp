#include <iostream>

using namespace std;

int main()
{
    string nameStudent;
    int score;
    int numCourses;
    int numStudents;
    
    int i = 0;
    int j = 0;
    int sum = 0;
    float average;
    
    cin >> numStudents >> numCourses;

    int numScores = numCourses * numStudents;

    for (i=0;i<numStudents;i++)
    {
        cin >> nameStudent;
    }
    
    for (j=1;j<numScores;j++)
    {
        cin >> score;
        sum += score;
    }
    average = sum/numScores;
    
    cout << "Name: " << nameStudent << "\n" <<  "Sum: " << sum << "\n" <<  "Avg: " << average << endl;
    
    return 0;
}


//DOUBLE CHECK THIS ONE WORKS PROPERLY DIRECTIONS NOT COMPLETELY CLEAR