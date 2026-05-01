//program 1
//to convert celcius to fahranite

#include <iostream>
using namespace std;

int main()
{
    double celcius;
    double fahranite;
    cin>>celcius;
    
    fahranite = (celcius*9.0/5.0)+32;
    cout<<fahranite<<endl;

    return 0;
}









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


















