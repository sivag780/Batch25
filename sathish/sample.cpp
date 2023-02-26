#include<iostream>
using namespace std;
class A
{
public:
	int x,y;

	A ():x(10),y(x)
	{
		cout<<"A constactor"<<endl;
	}
	void display()
	{
		cout<<x<<y<<endl;
	}
};
class B : public A
{
public:
	int a,b;
	B():a(20),b(a)
	{  
		cout<<"B constractor"<<endl;
	}
	void display()
	{
		cout<<a<<b<<endl;
	}
};
void show ( A& tobj1, A& tobj2)
{
	tobj1.x=111;
	tobj1.y=222;
	tobj2.x=tobj1.x+200;
	tobj2.y=tobj1.y+300;

}
void show(B& tobj3,B& tobj4)
{
	tobj3.a=333;
	tobj3.b=444;
	tobj4.a=tobj3.a+555;
	tobj4.b=tobj3.b+666;
}
int main()
{
	A obj1;
	A obj2;
	B obj3;
	B obj4;
	obj1.x=11;
	obj1.y=22;
	obj2.x=33;
	obj2.y=44;
	obj3.a=55;
	obj3.b=66;
	obj4.a=77;
	obj4.b=88;
	show(obj2,obj1);
	show (obj4,obj3);
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
} 