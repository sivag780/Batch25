#include<stdio.h>
int main()
{
/*{
	int a[6]={1,2,3,4,5,6};
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
}*/
int a[2][5]={{1,2,3,4,5},{11,22,33,44,55}};
int i,j;
i=0,j=0;
{
for(i=0;i<2;i++)
{
	for(j=0;j<5;j++)
	{
		printf("%d,%d\n",&a[i][j],(*a+i)+j));
	
}
}
}


