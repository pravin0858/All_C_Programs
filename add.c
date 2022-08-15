#include<stdio.h>
//#include<conio.h>

int  main()
{
	int a,b;
	 int add(int x,int y);  //formal parameters
	printf("enter a two numbers:");
	scanf("%d%d",&a,&b);
	
	printf("addition is %d",add(a,b)); //actual parameters
	return 0;
}
int add (int x,int y)
{

	return (x+y);
}
