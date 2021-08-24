#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    //Not recommended to use below inline function
    //static int c=0;  //This executes only once
    //c = c + 1;    // Next time this function is run, the value of c will be same
  return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04)
//float factor--> Default argument---> should be at extremely right
//int currentMoney-->compulsory argument---> should be at left
{
   return currentMoney*factor;
}

int main(){
  //int a, b;
  //cout<<"Enter the value of a and b"<<endl;
  //cin>>a >> b;
  //cout<<"The product of a and b is "<<product(a,b); 
  int money = 100000;
  cout<<"If you have " <<money<< "Rs in your bank account, then you will receive"<<moneyReceived(money)<< "Rs after one year"<<endl;
  cout<<"For VIP : "<<"If you have " <<money<<" Rs in your bank account, then you will receive"<<moneyReceived(money,1.1)<< "Rs after one year"<<endl;
return 0;
}