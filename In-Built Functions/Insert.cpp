#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    /*.insert(position,text or character):
    Position :-Before the index or position the character or the text is inserted
    It modifies original string only
    */ 
    s.insert(5," World");
    cout<<s;
    return 0;
}