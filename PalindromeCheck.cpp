#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp=s;
    int i=0,j=s.length()-1;
    while(i<j)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    if(temp==s) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
    return 0;
}