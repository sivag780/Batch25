#include<stdio.h>
#include<string.h>
/*int strlen_us(char[]);
int main() {
	char a[] = "vikram";
		//printf("%s\n", &a);
		//printf("%d\n",sizeof a);
		//printf("%s\n",*(a));
		printf("%d\n",strlen(a));
		int size = sizeof a;
		printf("%d\n", size);

		
}
int strlen_us(char[]) {
	int len,x, i = 0;

	while (int x[i++] != '\0') {
		printf("%d\n", i);
		return i;
	}
}*/
/*int main() {
	int i, j;
	char geeting[] = "hi vikram";
	printf("%s", geeting);
	i=sizeof geeting;
	printf("%d", i);
	for (i = 0; i < 10; i++) {
		//printf("%s", geeting);
	}
}*/
#include<stdio.h>
#include<string>
void fun(char a[]);
int main()
{
	char a[] = "hi iam vikram";
	fun(a);
}
void fun(char a[])
{
	int i, j, len, k = 0;
	char temp;
	len = strlen(a);
	_strrev(a);
	for (i = 0; i <= len; i++)
	{
		if (a[i] == ' ' || a[i] == '\0')
		{
			for (j = i - 1; k < j; j--, k++)
			{
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
			}
			k = i + 1;
		}

	}
	printf("%s", a);
}
/*int main()
{
	int i, j, len, k = 0;
	char temp;
	char a[] = "hellow an indian ";
	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] ==' ')
		{
			for (j = i - 1; j<i; ++j)
			{
				temp = a[j];
				a[j] = a[k];
				a[k] = temp;
			}
			k = i + 1;

		}
	}
	printf("%s\n", a);
}*/