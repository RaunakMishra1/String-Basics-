#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    /*
    replace (position,length,string)
    Position(Index):From where to remove string 
    Length: Count of character to remove from string
    String:Add String from that position only.
    */
    str.replace(12,4,"C++");
    cout<<str;
    return 0;
}
