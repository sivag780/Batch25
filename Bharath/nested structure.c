#include<stdio.h>
struct dob
{
	int dd;
	int mm;
	int yy;
};
struct pan
{
	int id;
	struct dob D;
};
struct emp
{
	int id;
	char sec;
	float sal;
	struct dob D1;
};
int main()
{
	struct emp E = {100,'A',500.00,{12,12,2012}};
	printf("%d %c %f\n %d %d %d",E.id,E.sec,E.sal,E.D1.dd,E.D1.mm,E.D1.yy);
}