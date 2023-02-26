#include<stdio.h>
#include<string.h>
int main()
{
	//char *str;
	char*str[]={"hello","hai","good"};
	char*ptr;
	int i;
	//for(i=0;i<3;i++)
	{
		 // printf("%s\n",str[i]);
		printf("%c",*(*(str+2)+2));
	}
}