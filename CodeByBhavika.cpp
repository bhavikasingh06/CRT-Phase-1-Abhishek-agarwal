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











//3
//sum and average of 3 numbers
#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"enter 1st number = ";
    cin>> num1;
    cout<<"enter 2nd number = ";
    cin>> num2;
    cout<<"enter 3rd number = ";
    cin>> num3;
    
    int sum;
    sum = num1+num2+num3;
    cout<<"sum = "<<sum<<endl;
    
    int avg;
    avg = sum/3;
    cout<<"avg = "<<avg<<endl;
    
    return 0;
}











//5
//grade calculator
#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter number of students = ";
    cin>>num;
    
    if(num >= 90)
    {
        cout<<"grade A"<<endl;
    }
    else if(num >= 70)
    {
        cout<<"grade B"<<endl;
    }
    else if(num >= 50)
    {
        cout<<"grade C"<<endl;
    }
    else
    {
        cout<<"fail"<<endl;
    }
    return 0;
}

















