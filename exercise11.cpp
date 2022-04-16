#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string fname,lname;
cout<<"enter your first name:";
getline(cin,fname);
cout<<"enter your lname:";
getline(cin,lname);
cout<<"after reversing a word:"<<lname+ ", "+fname<<endl;;
}