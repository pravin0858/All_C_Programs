#include<stdio.h>

int main()
{
	int n,reverse=0 ,rem,original;
	printf("enter a number:");
	scanf("%d",&n);
	
	original = n;
	
	while(n!=0)
	{
		rem = n%10;
		reverse = (reverse * 10) + rem;
		n = n/10;
		
	}
	if(original =reverse)
	{
		printf("paildrome number is %d ",original);
		
	}
	else 
	{
		printf("%d is not a paildrome number",original);
		
	}
	return 0;	
}
