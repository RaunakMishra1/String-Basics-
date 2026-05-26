#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string str2;
    getline(cin,str2);
    if(str.compare(str2)==0)
    {
        cout<<"Equal";
    }
    else cout<<"Not Equal";
    return 0;
}