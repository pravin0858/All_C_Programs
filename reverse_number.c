#include<stdio.h>

int main ()
      {
	      int n, reverse, rem;
	      printf("enter a number:");
	      scanf("%d",&n);

	      while(n!=0)
	      { 
		      rem = n %10;    // to get last number
		      reverse = (reverse *10 ) + rem ;  // start of reverse number 
		      n = n/10;  // to get the  second last number and so on 
	      }
	      printf("reverse of the entered number is %d ", reverse);
	      return 0;
      }
