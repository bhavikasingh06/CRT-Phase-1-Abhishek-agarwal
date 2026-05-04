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











//4
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












//5
//leap year check
#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<" enter a year = ";
    cin>>year;
    
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout<<"the "<<year<<" is a leap year!!"<<endl;
    }
    else
    {
        cout<<"the "<<year<<" is not a leap year"<<endl;
    }
    return 0;
}













//6
//area of shapes
#include<iostream>
using namespace std;
int main() {
    int choice;
    
    cout<<"find area of shapes....!\n";
    cout<<"1. rectangle\n";
    cout<<"2. circle\n";
    cout<<"3. triangle\n";
    cout<<"enter your choice.. = ";
    cin>>choice;
    
    if(choice == 1)
    {
        float length, width;
        cout<<"enter length and width of a rectangle";
        cin>>length>> width;
        cout<<"area of rectangle is = "<<length * width<<endl;
    }
    else if(choice == 2)
    {
        float radius;
        cout<<"enter radius of circle = ";
        cin>>radius;
        cout<<"radius of a circle is = "<<3.14*radius*radius<<endl;
    }
    else if(choice == 3)
    {
        int base, height;
        cout<<"enter base and height of a triangle = ";
        cin>>base>>height;
        cout<<"area of triangle is = "<<0.5*base*height<<endl;
    }
    else
    {
        cout<<"invalid choice.. try again!!"<<endl;
    }
    return 0 ;
    
}





















