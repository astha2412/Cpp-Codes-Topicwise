#include <iostream>
using namespace std;
const float PI = 3.14;

int sum(int a, int b)
{
    cout << "Using function with two arguments " << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with three arguments " << endl;
    return a + b + c;
}

//cylinder
int volume(int r, int h)
{
    return (PI * r * r * h);
}

//cube
int volume(int a)
{
    return (a * a * a);
}

//Rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The sum of 3 and 5 is " << sum(3, 5) << endl;
    cout << "The sum of 3 , 5 and 7 is " << sum(3, 5, 7) << endl;
    cout << "The volume of cuboid 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    return 0;
}