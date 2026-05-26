#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        char str=tolower(s[i]);
        // We can also convert to upper case 
        if(str=='A'||str=='E'||str=='I'||str=='O'||str=='U'||str=='a'||str=='e'||str=='i'||str=='o'||str=='u')
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}