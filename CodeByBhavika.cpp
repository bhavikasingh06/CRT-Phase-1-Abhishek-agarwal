//1
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









//2
//age group classifer
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age here = ";
    cin>>age;
    
    if(age<18)
    cout<<"Child";
    else if(age>=18 && age<=30)
    cout<<"Youngsters...!!";
    else if(age>=31 && age<=60)
    cout<<"Elder ppl";
    else 
    cout<<"Sinor citizens";
    
    return 0;
}
