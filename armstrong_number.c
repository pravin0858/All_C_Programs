#include<stdio.h>

int main()
{
	int n,originalnum,result=0,rem;
	printf("enter a number:");
	scanf("%d",&n);
	
	originalnum =n;
	while(originalnum!=0)
	{
		rem = originalnum % 10;
		result = result + (rem *rem *rem);
		originalnum = originalnum /10;
		
	}
	if (result==n)
	{
		printf("armstrong number is %d",n);
		
	}
	else 
	{
		printf("%d is not armstrong number ",n);
		
	}
	return 0;
	
}
