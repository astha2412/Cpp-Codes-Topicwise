#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

class Employee
    {
        int id;
       static int count;

    public:
        void setData(void)
        {
            cout << "The Id of employee is " << endl;
            cin >> id;
            count++;
        }
        void getData(void)
        {
            cout <<"The id of this employee is "<< id <<" employee no. is "
            << count <<endl;
        }
        static void getCount(void){
           // cout<<id; //throws an error
            cout<<"The value of count is "<<count<<endl;
        }
    };

//count is the static member of class employee
    int Employee :: count; //default value is zero
 
 int main()
{
   Employee harry, rohan, lavish;
  /* harry.id = 1; 
   harry.count = 0; *cannot do this as id and count are private* */
   harry.setData();
   harry.getData();  
   Employee :: getCount();

   rohan.setData();
   rohan.getData();  
   Employee :: getCount();

   lavish.setData();
   lavish.getData();
   Employee :: getCount();  

    return 0;
}