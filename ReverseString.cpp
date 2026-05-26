#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int first=0,last=s.length()-1;
    while(first<last)
    {
        char temp=s[first];
        s[first]=s[last];
        s[last]=temp;
        first++;
        last--;
    }
    cout<<s;
    return 0;
}