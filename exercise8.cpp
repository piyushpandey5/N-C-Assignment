#include<iostream>
using namespace std;
int main(){
    string fname,lname,age;
    char grade;
    cout<<"what is your name?"<<endl;
    getline(cin,fname);
    cout<<"what is your last name?"<<endl;
    getline(cin,lname);
    cout<<"what is your grade?"<<endl;
    cin>>grade;
    cout<<"what is your age:"<<endl;
    cin>>age;

    cout<<"name:"<<lname<<" "<<fname<<endl;
    grade+=1;
    cout<<"grade:"<<grade<<endl;
    cout<<"age:"<<age<<endl;
    
}