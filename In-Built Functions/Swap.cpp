#include<iostream>
using namespace std;
int main()
{
    string str1="Apple";
    string str2="Banana";
    /*
    swap(string1,string2) it swap string1=(value is string2)
    and string2=(value is string1)
    It modifies original string
    */
    swap(str1,str2);
    cout<<str1<<endl;
    cout<<str2;
    return 0;
}