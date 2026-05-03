//to check alphabet is in upper/lower in case
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter a alphabet = ";
    cin>>ch;
    
    if(ch >= 'a' && ch <= 'z')
    cout<<"lower case";
    else if(ch >= 'A' && ch <= 'Z')
    cout<<"upper case";
    else
    cout<<"not a valid alphabet.. try again!";
    
    return 0;
}

