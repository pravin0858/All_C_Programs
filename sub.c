#include<stdio.h>
#include<stdio.h>

int main ()
{
	int a,b;
	int sub(int x,int y);
	printf("enter a number:");
	scanf("%d%d",&a,&b);
	
	printf("substration is %d",sub(a,b));
	return 0;
	}
	int sub (int x,int y)
	{
		return (x-y);
	}
