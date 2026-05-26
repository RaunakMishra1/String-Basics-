#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            //s[i]='_';
            s.replace(i,1,"_");
        }
    }
    cout<<s;
    return 0;
}