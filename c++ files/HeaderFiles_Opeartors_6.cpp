/*THERE ARE TWO TYPES OF HEADER FILES
SYSTEM HEADER FILE: IT COMES WITH COMPILER */
#include<iostream>
//USER DEFINED HEADER FILE: IT IS WRITTEN BY PROGRAMMER
//include"this.h" : this will produce error if not present in the current directory
using namespace std;
 int main()
 {
     //ASSIGNMENT OPERATORS
     int a=4, b=5;;
     cout<<"OPERATORS IN C++"<<endl;
     cout<<"FOLLOWING ARE THE TYPES OF OPERATORS IN C++"<<endl;
     //ARITHMETIC OPERATORS
     cout<< "The value of a + b = "<<a+b <<endl;
     cout<< "The value of a - b = "<<a-b <<endl;
     cout<< "The value of a * b = "<<a*b <<endl;
     cout<< "The value of a / b = "<<a/b <<endl;
     cout<< "The value of a % b = "<<a%b <<endl;
     cout<< "The value of a + + = "<<a++ <<endl;
     cout<< "The value of a - - = "<<a-- <<endl;
     cout<< "The value of b + + = "<<b++ <<endl;
     cout<< "The value of b - - = "<<b-- <<endl;
     cout<<endl;
     
    //COMPARISON OPERATORS
    cout<<"FOLLOWING ARE THE TYPES OF COMPARISON OPERATORS IN C++"<<endl;
    cout<< "The value of a == b = "<<(a==b)<<endl;
    cout<< "The value of a >= b = "<<(a>=b)<<endl;
    cout<< "The value of a <= b = "<<(a<=b)<<endl;
    cout<< "The value of a != b = "<<(a!=b)<<endl;
    cout<< "The value of a > b = "<<(a>b)<<endl;
    cout<< "The value of a < b = "<<(a<b)<<endl;

    //LOGICAL OPERATORS
    cout<<"FOLLOWING ARE THE TYPES OF LOGICAL OPERATORS IN C++"<<endl;
    cout<< "The value of this logical and operator ((a==b) && (a<b)) = "<<((a==b) && (a<b))<<endl;
    cout<< "The value of this logical and operator ((a==b) || (a<b)) = "<<((a==b) || (a<b))<<endl;
    cout<< "The value of this logical not operator (!(a==b)) = "<<(!(a==b))<<endl;
     return 0;
 }