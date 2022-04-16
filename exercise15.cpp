#include <iostream>
using namespace std;

struct Pizza
{
	string company_name;
	float  dia_of_pizza;
	int  weight_of_pizza;
	
};

int main()
{
	Pizza *p=new Pizza[3];
	for(int i=0;i<3;i++)
	{
		cout<<"enter the diameter of pizza:";
		cin>>p->dia_of_pizza;
		cout<<"enter the company name of pizza:";
		cin>>p->company_name;
		cout<<"enter the weight of pizza :";
		cin>>p->weight_of_pizza;
	}
	for(int i=0;i<3;i++)
	{
		cout<<"diameter of pizza is:"<<p->dia_of_pizza<<endl;
		cout<<"pizza company name:"<<p->company_name<<endl;;
		cout<<"weight of pizza:"<<p->weight_of_pizza<<endl;
	}
return 0;
}
