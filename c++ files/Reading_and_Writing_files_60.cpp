#include<iostream>
#include<fstream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string st = "Astha";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    // in>>st2;     //It reads only first character.
    getline(in, st2);  
    cout<<st2;

    return 0;
}
