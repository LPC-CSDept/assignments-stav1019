
#include <iostream>

using namespace std;

int main()
{
    int inputValidate(int, int);
    //int getListprime(int, int);
    
    int begin;
    int end;
    int res;
    
    cout << "please enter 2 inputs for prime list boundaries:\n";
    cin >> begin >> end;
    
    
    
    res = inputValidate(begin, end);
    if (!res){
        cout << "error";
        exit(0);
    }
    
    //getListprime(begin, end);
}
    
    int inputValidate(int begin, int end)
    {
         if ((begin > end)||(begin < 0) ||(end < 0)) 
        return 0;
    
    else
        return 1;
    }
    
    
    
    void getListprime(int begin, int end){
        int i;
        int j;

        for(i=begin;i<=end;i++){
            for(j=2;j<=(i/2);j++)
                if (i%j==0)
                    break;
                
                if (j>(i/2))
                
                    cout << i << ", ";
                }
            }
            
            
    
        
        
    
    


