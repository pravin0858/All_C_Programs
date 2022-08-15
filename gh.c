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

}
   
   int main()
   {
   	 even();
     odd();
     
    return 0;

	} 
