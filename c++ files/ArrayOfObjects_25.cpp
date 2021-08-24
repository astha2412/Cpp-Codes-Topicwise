#include<iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
       void setId(void){
           salary = 122;
           cout<<"Enter the id of employee "<<endl;
           cin>>id;
       }
       void getId(void){
           cout<<"The id of employee is : "<<id<<endl;
       }
};

int main(){
 /* Employee Harry, Rohan, Lovish, Shruti;
  Harry.getId();
  Harry.setId();  */
  
  //if we want to store information of 2000 employees then we need to use array

  Employee fb[100];
   for(int i=0; i<100; i++)
   {
       fb[i].setId();
       fb[i].getId();
   }

return 0;
}