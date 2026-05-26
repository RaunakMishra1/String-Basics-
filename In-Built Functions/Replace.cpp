#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    /*
    replace (position,length,string)
    Position(Index):From where to remove string or character
    Length: Count of character to remove from string
    string/character:Add String/Character from that position only.
    */
    str.replace(12,4,"C++");
    cout<<str;
    return 0;
}