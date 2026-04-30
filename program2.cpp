//program 2
//local and global variable

#include <iostream>
using namespace std;
int globalvariable = 100;

int main()
{
    int localvariable;
    int result;
    cin>>localvariable;
    
    result = (globalvariable/localvariable);
    cout<<result<<endl;
    return 0;
    
}
