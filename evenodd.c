#include<stdio.h>
#include<conio.h>

void even();
void odd();

void even()
{
	int i;
	printf("\n enter a number:");
	scanf("%d",&i);
	if (i%2==0)
	{
		printf("\n entered number is even");
	}
	else if (i>0)
	{
		printf("\n entered number is positive");
	}
	else 
	{
		printf("\n entered number is negative");
	}
}
   void odd()
{
   	int i;
   	printf("\n enter a number:");
   	scanf("%d",&i);
   	
   	if(i%2!=0)
   	 {
   		printf("\n entered number is odd");
	   }
	   else if (i>0)
	{
		printf("\n entered number is positive");
	}
	else 
	{
		printf("\n entered number is negative");
	}

}
   
   int main()
   {
   	 even();
     odd();
     
    return 0;

	} 
