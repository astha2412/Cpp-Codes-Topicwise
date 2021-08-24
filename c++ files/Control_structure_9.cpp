#include<iostream>
using namespace std;
 int main()
 {
     int age;
     cout<<"Enter age"<<endl;  
     cin>>age;


     /* 1. Selection control structure-If else ladder*/
     /*if(age<18)
     {
         cout<<"You cannot come to party"<<endl;
     }           
     else if(age==18)
     {
      cout<<"You will get a kid pass"<<endl;
     }
     else
     {
         cout<<"You can come to the party"<<endl;
     } */

     
      /*2. Selection control structure- switch case statements*/
      switch (age)
      {
      case 2:
       cout<<"Your age is 2"<<endl;
          break;

      case 18:
       cout<<"Your age is 18"<<endl;
          break;

      case 22:
       cout<<"Your age is 22"<<endl;
          break;
      
      default:
      cout<<"No special cases"<<endl;
          break;
      }
     return 0;
 }