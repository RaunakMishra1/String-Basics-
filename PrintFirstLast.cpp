#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s[0]<<endl;
    cout<<s[s.length()-1];
    return 0;
}