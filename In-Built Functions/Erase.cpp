#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //.erase(position,count) it modifies the original string only 
    s.erase(0,5);
    cout<<s;
    return 0;
}