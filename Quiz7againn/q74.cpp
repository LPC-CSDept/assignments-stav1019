#include	<iostream>
#include	<cstdlib>
#include	<ctime>
#include	<vector>
#include	<algorithm>
#include	<iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
	vector<int> number;
	int 	size = 20;
	srand(time(0));
	makevector(number, size);
	printvector(number);
	deleteone(number);
}
void makevector(vector<int> &vec, int size)
{
	for(int i=0; i<size; i++)
    	    vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
	for(int v : vec)
    	     cout << v << "\t";
	cout << endl;
}
void deleteone(vector<int> &vec)
{
      int usernum, deletecnt=0;
      
      cout << "please enter a number to be deleted from the vector: ";
      
      cin >> usernum;
      
      
      
      
vector<int>::iterator it;
  
it = std::find(vec.begin(), vec.end(), usernum);
//int deletecnt = 0;
  
while(it != vec.end())
{
vec.erase(it);
  deletecnt++;

it = std::find(vec.begin(), vec.end(), usernum);
}
  


      // Your Code 

      cout << usernum << " is deleted " << deletecnt << " times \n" << "new vector: \n ";
	printvector(vec);
	
}

