#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    s[0]='H';
    cout<<s;
    return 0;
}