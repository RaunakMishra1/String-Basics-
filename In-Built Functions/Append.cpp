#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    //value of str1 will get change so modification will be in str1 i.e.(str1=str1+str2)
    str1.append(str2);

    /*value of str2 will get change so modification will be in str2 i.e.(str2=str1+str2)
    str2.append(str1);*/
    
    cout<<str1<<endl;
    cout<<str2;
    

    return 0;
}