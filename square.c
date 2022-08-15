#include<stdio.h>
#include<math.h>

void sq();
void cb();

void sq()
{
	int n;
	float sr;
	printf("\n enter a number :");
	scanf("%d",&n);
	
	sr=sqrt(n);
	printf("\n square root of number is %f",sr);
 }
 void cb()
 {
 	int n;
	float cr;
	printf("\n enter a number :");
	scanf("%d",&n);
	
	cr=cbrt(n);
	printf("\n cube root of number is %f",cr);
 }
   int main ()
   {
   	sq();
   	cb();
   	return 0;
   }
