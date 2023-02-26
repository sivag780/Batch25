#include<stdio.h>
#include<stdlib.h>
/*void create();
void main()
{
	create();
}
void create()
{
	int*ptr=(int*)malloc(sizeof(int)*3);
	if(ptr!=NULL)
		*ptr=30;
	*(ptr+1)=500;
    *(ptr+2)=1000;
   printf("%d,%d,%d\n" ,*ptr,*(ptr+1),*(ptr+2));
	   ptr=NULL;
free(ptr);
}*/
void create()
{
	int*ptr=(int*)calloc(2,sizeof(int));
	if(ptr!=null)
	{
		*(ptr+0)=10;
		*(ptr+1)=20;
	}
	free(ptr);
	ptr=null;
}
