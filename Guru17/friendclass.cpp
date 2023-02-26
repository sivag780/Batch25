#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    int y;
    public:

    void display1()
    {
        cout<<x<<" "<<y<<endl;
    }
    void fun();
    friend class B;
};
class B
{
    int p;
    int q;
    void display()
    {
        cout<<p<<" "<<q<<endl;
    }
public:
    void check();
    friend class A;
};
void B::check()
{
	A obj;
	obj.x=20;
	obj.y=30;
	obj.display1();
}
void A::fun()
{
	B obj1;
	obj1.p=200;
	obj1.q=300;
	obj1.display();
}
	
int main()
{
    B obj2;
	obj2.check();
	A obj1;
	obj1.fun();
	//obj1.display1();

}