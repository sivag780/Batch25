#include<iostream>
using namespace std;
class A
{
public:
	int a;
	int b;
	A()
	{
		a=10;
		b=100;
		cout<<a<<" "<<b<<" "<<endl;
	}
	A(int p,int q)
	{
		a=p;
		b=q;
		cout<<a<<" "<<b<<" "<<endl;
		cout<<"parametrized"<<endl;
	}
};
int main()
{
	A obj1;
	A obj2(20,40);
}


