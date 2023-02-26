#include<stdio.h>
#include<iostream>
using namespace std;
class A
{
public:
	int a, b;
	A()
	{
		a = 10;
		b = 20;
	}
	A(int x,int y)
	{
		    a = y;
			b = x;
	}
	void display()
	{
		cout << a << " " <<b<< endl;
	}
	//friend void operator+(A obj1, A obj);
};

void operator+(A obj1,A obj)
{

	obj1.a += obj.a;
	obj1.b += obj.b;
	obj1.display();
	//return obj1;
}

ostream& operator<<(ostream& COUT, A obj)
{
	COUT << obj.a << endl;
	COUT << obj.b << endl;
	return COUT;
}
A operator++(A obj1,int x)
{
	obj1.a = obj1.a++;
	obj1.b = obj1.b++;
	//cout << obj1.a <<" " << obj1.b << endl;
	return obj1;
}
A operator++(A obj)
{
	 ++obj.a;
	++obj.b;
	//cout << obj.a << " " << obj.b << endl;
	return obj;
}
int main()
{
    cout<<"the changes i have did is nothing"<<endl;
	A obj1(12, 23);
	A obj2(11, 55);
	A obj;
	//A obj3 = obj++;
	++obj;
	cout << obj << endl;
	//obj++;
	//cout << obj3 << endl;
	//cout << obj << endl;
	/*obj1 + obj2;
	obj2 + obj1;
	cout << obj1 << endl;*/
}

