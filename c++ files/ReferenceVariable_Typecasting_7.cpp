#include<iostream>
using namespace std;
//int c=35;

 int main()
 {
     //********Build in datatypes**********
     //int a,b,c;
     //cout<<"Enter a"<<endl;
     //cin>>a;           
     //cout<<"Enter b"<<endl;  
     //cin>>b;           
     //c = a + b;
     //cout<<"SUM = "<<c<<endl;  
     //cout<<"The global c is "<<::c<<endl;

     //*****************float, double and long double literals*****************
     //float d = 34.4F;
     //long double e = 34.4L;
     //cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
     //cout<<"The size of 34.4f is"<<sizeof(34.4f)<<endl;
     //cout<<"The size of 34.4F is"<<sizeof(34.4F)<<endl;
     //cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
     //cout<<"The size of 34.4L is"<<sizeof(34.4L)<<endl;
      
      //**************************REFERENCE VARIABLES************************
      //Rohan das----------> Monty -----------> Rohu ----------> Dangerous coder
      //float x = 455;
      //float &y = x ;
      //cout<<x<<endl;
      //cout<<y<<endl;

       //************************** TYPECASTING ************************
       int a = 45;
       float b = 45.46;
       cout<<"The value of a is "<<(float)a<<endl;
       cout<<"The value of a is "<<float(a)<<endl;

       cout<<"The value of b is "<<(int)b<<endl;
       cout<<"The value of b is "<<int(b)<<endl;

       int c = int (b);
       cout<<"The expression is "<< a+b<<endl;
       cout<<"The expression is "<< a+int(b)<<endl;
       cout<<"The expression is "<< a+(int)b<<endl;
       return 0;
 }