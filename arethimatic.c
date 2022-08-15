#include<stdio.h>
#include<conio.h>

void sub();
void add();
void mul();
void div();

void sub()
{
	int a,b,sub;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	sub =a-b;
	printf("substraction is %d",sub);
	
}
void add()
{
	int a,b,add;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	add =a+b;
	printf("addition is %d",add);
	
}
  void mul()
  {
  		int a,b,mul;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	mul =a*b;
	printf("multiplication is %d",mul);
  }
   void div()
   {
   	int a,b,div;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	div =a/b;
	printf("division is %d",div);
   }
   
   int main ()
   {
   	add();
   	mul();
   	sub();
   	div();
   	return 0;
   }
