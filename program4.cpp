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
