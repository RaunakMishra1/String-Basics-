#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    /*
    .find(text or character) it finds the position of character or substring 
    It does not modifies original string it is immutable
    */
    int pos=s.find("Raun");
    cout<<pos<<endl;
   
    return 0;
}