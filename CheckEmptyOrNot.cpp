#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // if(s.length()==0)
    // {
    //     cout<<"String is empty";
    // }
    // else cout<<"String is not empty";

    //In Built-Function
    if(s.empty()) cout<<"Empty String";
    else cout<<"Filled String";
    return 0;
}