#include<iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
class Complex{
    int a, b;
    public:
      void setNumber(int n1, int n2){
          a = n1;
          b = n2;
      }
      //Below lines means that non member function- sumComplex function is allowed to do anything with my private members
      friend Complex sumComplex(Complex o1, Complex o2);
      void printNumber(){
          cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
      }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
Complex c1, c2, sum;
c1.setNumber(3,4);
c2.setNumber(5,6);

c1.printNumber();
c2.printNumber();

sum = sumComplex(c1, c2);
sum.printNumber();
return 0;
}

/* Properties of friend functions


1. Not in the scope of class
2. Since it is not in the scope of the class, it can't be called from the 
object of that class c1.sumComplex() == Invalid
3. can be invoked without the help of any objects
4. usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need 
object_name.member_name to access any member. 


*/