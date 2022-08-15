#include<stdio.h>
#include<conio.h>

void area();  //function declation
void cir();
void arclength();

void area ()   //function defination
{
     int r;
	 float area;
	 
	 printf("\n enter a radius of circle:");
	 scanf("%d",&r);
	 
	 area=3.14*r*r;	
	 printf(" \n area of circle is %f",area);
	 
}

void cir()
{
	int r;
	float crc;
	printf(" \n enter a radius of circle:");
	scanf("%d",&r);
	
	crc=2*3.14*r;
	printf(" \n circumference of the circle is %f",crc);
	
}
void arclength()
{
	int r,angle;
	float s;
	printf("enter a radius and angle:");
	scanf("%d%d",&r,&angle);
	
	s = r*angle;
	
	printf("arc length of circle is %f",s);
}
   int main ()  //function calling
   {
   	arclength();
   	area();
   	cir();
   	area();
   	area();
   	cir();
   	return 0;
   }
