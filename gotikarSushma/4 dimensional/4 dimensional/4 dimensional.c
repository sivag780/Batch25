#include<stdio.h>
int main()
{
	int i,j,k,l;
	int a[2][2][2][3]=
	{{ {1,2,3},
	   {4,5,6}
	 },
	{ {7,8,9},
	  {10,11,12}
	},
	{ {13,14,15},
	  {16,17,18}
	},
	{{19,20,21},
	 {22,23,24}
	}};
	for(i=0;i<2;i++)
	{
	    for(j=0;j<2;j++)
		{
		  for(k=0;k<2;k++)
		  {
			  for(l=0;l<3;i++)
			  {
				printf("%d\n",a[i][j][k][l]);
			  }
		  }
		}
	}
}
	
