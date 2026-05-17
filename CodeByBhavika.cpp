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











//7
//INHERITANCE
// 1 single inheritance
#include <iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"animal eats food..."<<endl;
    }
};

class Dog : public Animal {
public:
    void bark(){
        cout<<"dog bark.."<<endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.bark();
}












//8
//2 multilevel inheritance
#include <iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"animals eats food.."<<endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout<<"dog bark louder"<<endl;
    }
};

class Puppy : public Dog{
public:
    void weep(){
        cout<<"puppy weeps"<<endl;
    }
};

int main(){
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
}











//9
//hierarchical inheritance
#include <iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"animal eats food "<<endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout<<"dog bark "<<endl;
    }
};

class Cat : public Animal{
public:
    void meow(){
        cout<<"cat meowsss "<<endl;
    }
};

int main(){
    Dog d;
    d.eat();
    d.bark();
    
    Cat c;
    c.eat();
    c.meow();
}











//10
//multiple inheritance
#include <iostream>
using namespace std;

class Father{
public:
    void showFather(){
        cout<<"this is father class "<<endl;
    }
};

class Mother{
public:
    void showMother(){
        cout<<"this is mother class "<<endl;
    }
};

class Child : public Father, public Mother{
public:
    void showChild(){
        cout<<"this is child class "<<endl;
    }
};

int main(){
    Child c;
    c.showFather();
    c.showMother();
    c.showChild();
}











//11
//hybrid inheritance
#include<iostream>
using namespace std;
class Person{
public:
    void show(){
        cout<<"this is person class"<<endl;
    }
};

class Student : virtual public Person {
    
};

class Employee : virtual public Person {
    
};

class Manager : public Student, public Employee {
    
};

int main(){
    Manager m;
    m.show();
}












// 1 
//print series 1 to n
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1; i <= n; i++){
        cout<<i<<" ";
    }
    return 0;
}









// 2 
//print series n to 1
#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    
    for(int i=N; i >= 0; i--){
        cout<<i<<" ";
    }
    return 0;
}












// 3
//print 1*1 = 1, 2*2 = 4, 3*3 = 9.......
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1; i <= n; i++){
        cout<<i*i<<" ";
    }
    return 0;
}











// 4  
//print 1*1*1 = 1, 2*2*2 = 8, 3*3*3 = 27.......
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1; i <= n; i++){
        cout<<i*i*i<<" ";
    }
    return 0;
}










// 4.2  
//print n number with some random digit
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1; i <= n; i++){
        cout<<i*3<<" ";
    }
    return 0;
}












// 5 
//print odd number 1 3 5 7 9..... increase by 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1; i <= 2*n-1; i = i +2){
        cout<<i<<" ";
    }
    return 0;
}







notes :- 
Quick Trick to Remember

Series  	Formula
1,2,3...	i
N...1   	i--
1,4,9...	i*i
1,8,27...	i*i*i
1,3,5...	i=i+2










// 6
//print even number 2 4 6 8 ... increase by 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0; i <= 2*n-1; i = i + 2){
        cout<<i<<" ";
    }
    return 0;
}










//problem 7 
//print 1 -1 1 -1 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number = ";
    cin>>n;
    
    for (int i = 1; i <= n; i++){
        if (i % 2 ==1)
            cout<<" 1, ";
        else
            cout<<" -1, ";
    }
    return 0;
}












//problem 8  
//print 1 0 1 0 1 0 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number = ";
    cin>>n;
    
    for(int i = 1; i <= n ; i++){
        if(i % 2 == 1)
            cout<<" 1 ";
        else
            cout<<" 0 ";
    }
    return 0;
}
    










//problem 9 
//print 1 -3 5 -7 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number = ";
    cin>>n;
    
    for (int i = 1; i <= n; i++){
        int num = i*2 - 1;
        
        if (i % 2 ==1)
            cout<<num<<" ";
        else
            cout<<- num<<" ";
    }
    return 0;
}












//problem 10 
//print 9 99 999 9999 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number = ";
    cin>>n;
    
    int num = 0;
    
    for (int i = 1; i <= n; i++){
        num = num*10 + 9;
        cout<<num<<" ";
    }
    return 0;
}











Quick Memory Trick
Series	    Logic
1,-1,1,-1	Alternate sign
1,0,1,0	    Alternate 1 and 0
1,-3,5,-7	Odd numbers + alternate sign
9,99,999	num = num*10+9











//problem 11 
//print 0 1 2 3 0 1 2 3 repeat 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        cout<<i % 4<<" ";
    }
    return 0;
}









//problem 12 
//print 0 1 2 3 0 1 2 3 repeat 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        cout<<(i % 4) + 1 <<" ";
    }
    return 0;
}










Quick Trick to Remember
Series	            Formula
0,1,2,3 repeat  	i % 4
1,2,3,4 repeat	    (i % 4)+1









// problem 13 
// fibonacci series Each new number is the sum of previous two.
// Example:
// 0+1=1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a = 0, b = 1, c;
    
    for(int i = 0; i < n; i++){
        cout<< a <<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}











//problem 14
//tribonacci series Each new number is the sum of previous three.
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a =0, b = 0, c = 1, d;
    
    for(int i = 1; i <= n; i++){
        cout<< a <<" ";
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return 0;
}








🔑 Easy Trick
Series	     Formula
Fibonacci   	a + b
Tribonacci  	a + b + c












//problem 15 
//calculate sum of digit 
#include <iostream>
using namespace std;
int main(){
    int num, sum = 0, digit;
    cout<<"enter a number = ";
    cin>>num;
    
    while(num > 0){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout<<"sum of digits are = "<<sum;
    
    return 0;
}












//problem 16 
//count digit of a number 
#include <iostream>
using namespace std;
int main(){
    int num, count = 0;
    cout<<"enter a number = ";
    cin>>num;
    
    while(num > 0){
        num = num / 10;
        count++;
    }
    cout<<"total digits are = "<<count;
    
    return 0;
}














//problem 17 
//reverse a number 
#include <iostream>
using namespace std;
int main(){
    int num, reverse = 0, digit;
    cout<<"enter a number = ";
    cin>>num;
    
    while(num > 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout<<"reversed number is = "<<reverse;
    
    return 0;
}















//problem 18 
//palindrome number  
#include <iostream>
using namespace std;
int main(){
    int num, original, reverse = 0, digit;
    
    cout<<"enter a number = ";
    cin>>num;
    
    original = num;
    
    while(num > 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(original == reverse)
        cout<<"palindrome ";
    else
        cout<<"not palindrome";
    
    return 0;
}















//problem 19 
//factorial of number 
#include <iostream>
using namespace std;
int main(){
    int num, fact = 1;
    
    cout<<"enter a number = ";
    cin>>num;
    
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    cout<<"factorial = "<<fact;
    return 0;
}











| Program        | Main Formula / Logic             | 
| -------------- | -------------------------------- | 
| Sum of digits  | `sum = sum + digit`              | 
| Count digits   | `count++`                        | 
| Reverse number | `reverse = reverse * 10 + digit` |
| Palindrome     | `if(original == reverse)`        | 
| Factorial      | `fact = fact * i`                | 











// //problem 20  
//calculate power of number 
#include <iostream>
using namespace std;
int main(){
    int n, p, result = 1;
    
    cout<<"enter number = ";
    cin>>n;
    
    cout<<"enter power = ";
    cin>>p;
    
    for(int i = 1; i <= p; i++){
        result = result * n;
    }
    cout<<"answer = "<<result;
    
    return 0;
}













//problem 21 
//print table 
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number = ";
    cin>>num;
    
    for(int i = 1; i <= 10; i++){
        cout<<num<<" x "<<i<<" = "<<num * i<<endl;
    }
    return 0;
}











// 22
// Add two numbers user input
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter a = ";
    cin>>a;
    cout<<" enter b = ";
    cin>>b;
    c = a + b;
    cout<<"sum = "<<c;
    return 0;
}











//23
//area of recangle 
#include<iostream>
using namespace std;
int main(){
    int l,b,c;
    cout<<" enter length = ";
    cin>>l;
    cout<<" enter width = ";
    cin>>b;
    c = l * b;
    cout<<"area of rectangle is = "<<c;
    return 0;
}














//24
//area of square
#include<iostream>
using namespace std;
int main(){
    int a, area;
    cout<<" enter length = ";
    cin>>a;
    area = a*a;
    cout<<"area of square is = "<<area;
    return 0;
}














//25
//min of number
#include<iostream>
using namespace std;                     
int main(){
    int a,b;
    cout<<" enter a = ";
    cin>>a;
    cout<<" enter b = ";
    cin>>b;
    if(a<b || b>a){
        cout<<"a " << a <<" is smaller";
    }else{
        cout<<"b " << b << " is smaller";
    }
    return 0;
}















//26
//number is even or odd
#include<iostream>
using namespace std;                     
int main(){
    int num;
    cout<<"enter a number = ";
    cin>>num;
    
    if(num % 2 == 0 ){
        cout<<"even number ";
    }else{
        cout<<"odd number";
    }
    
    return 0;
}
 














//27
//sum of number 1 to n 
#include<iostream>
using namespace std;                     
int main(){
    int n, sum = 0;
    cout<<"enter a number = ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout<<"sum of numbers is = "<<sum;
    return 0;
}
 

















//28
//number is prime or not 
#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout<<"enter a number = ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
        count++;
        }
    }
    if(count == 2){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}

















//29
//simple interest
#include<iostream>
using namespace std;                     
int main(){
    int p, r, t, si;
    cout<<" enter principal = ";            //The original amount of money
    cin>>p;
    cout<<" enter rate = ";                 //The percentage interest
    cin>>r;
    cout<<" enter time = ";                 //How long the money is kept
    cin>>t;
    
    si = (p*r*t)/100;                       //formula
    cout<<"simple interest = "<<si;
    return 0;
}














//30
//find max of two number
#include<iostream>
using namespace std;                     
int main(){
    int a, b;
    cout<<"enter first number = ";
    cin>>a;
    cout<<"enter second number = ";
    cin>>b;
    
    if(a>b || b<a){
        cout<<"number "<<a<<" is greater";
    }else{
        cout<<"number "<<b<<" is greater";
    }
    return 0;
}




















//31
//factorial of number
#include<iostream>
using namespace std;                     
int main(){
    int n, fact = 1;
    cout<<"enter a number = ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        fact = fact*i;
    }
    cout<<"factorial of "<<n<<" is = "<<fact;
    
    return 0;
}
















//32
//driving license
#include<iostream>
using namespace std;                     
int main(){
    int age;
    cout<<"enter age = ";
    cin>>age;
    
    if(age >= 18)
        cout<<"driving licensed allowed";
        
    else if(age >= 1 && age < 18)
        cout<<"not allowed licensed.. wait to turn 18";
        
    else
        cout<<"enter valid age ";
    
    return 0;
}













//32.1
//driving license 
#include<iostream>
using namespace std;                     
int main(){
    int age;
    cout<<"enter age = ";
    cin>>age;
    
    if(age >= 18)
        cout<<"driving licensed allowed";
    
    else
        cout<<"not allowed ";
    
    return 0;
}











    
