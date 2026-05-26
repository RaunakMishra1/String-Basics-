#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    /*
    substr(position,length) position is starting index and 
    length is number of characters to extract .
    It does not modify original string it makes modification in new string
    */
    string str1=s.substr(0,5);
    cout<<s<<endl;
    cout<<str1;
    return 0;
}




