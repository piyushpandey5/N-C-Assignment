#include<iostream>
#include<string.h>
using namespace std;
int main(){
    const int size = 25;
    char s1[size];
    char s2[size];
    cout<<"Enter your name:"<<endl;
    cin.getline(s1, size);

    cout<<"enter your last name:"<<endl;
    cin.getline(s2, size);
    char s3[size*2];
    strcpy(s3, s2);
    strcat(s3, ", ");
    strcat(s3, s1);
    cout<<s3<<endl;
    return 0;
}