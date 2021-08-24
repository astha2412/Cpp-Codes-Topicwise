#include<iostream>
using namespace std;
 int main()
 {
     //pointer--> datatype which is used to store the address of other datatype

     int a=3;
     int *b = &a;
     // & ---> Address of operator
     cout<<"The address of a is "<<&a<<endl;
     cout<<"The address of a is "<<b<<endl;

    // * ---> dereference operator
     cout<<"The value of a is "<<*b<<endl;
    
    //pointer to pointer
    int **c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value at( value at c) "<<**c<<endl;

      return 0;
     }
    