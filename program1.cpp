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










//program 3
//check weather a given sides of triangle are equilateral or not

#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cin>>side1 >> side2 >> side3;
    
    bool isEqu = (side1 > 0) && (side1 == side2) && (side2 == side3);
    cout<< isEqu << endl;
    
    return 0;
}










//program 4
//swapping of two variables

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    
    //logic to swap value
    
    int temp=a;
    a=b;
    b=temp;
    
    cout<<a<<"\n"<<b<<endl;
    return 0;
    
}
