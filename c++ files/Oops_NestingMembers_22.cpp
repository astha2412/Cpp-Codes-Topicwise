// OOPs - Classes and objects

        // C++ --> initially called --> C with classes
        // class --> extension of structure (in C)
        // structures had limitations
        //    -members are public
        //    -no method
        // classes --> structures + more
        // classes --> can have methods and properties
        // classes --> can make few members as private and few as public
        // structures in C++ are typedefed
        /* you can declare objects along with the class declaration like this :
   class Employee{
      ***** class definition
   } Harry, Rohan, Lovish;  */

        // Harry.salary = 8; It makes no sense if salary is PRIVATE

        // Nesting of member functions


#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

       else
        {
            s.at(i) = '0';
        }
    }
}
void binary :: display(void)
{
    cout<<"Display your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}
    int main()
    {
        
        binary b;
        b.read();
        b.check_bin();
        b.display();
        b.ones();
        b.display();

        return 0;
    }