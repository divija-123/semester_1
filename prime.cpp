#include<stdio.h>
int main()
{int n,isprime=1,i;
   printf("enter the number");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   if(n<=1){
   	isprime=0;
   }
  {
  	if(n%i==0)
  	isprime=0;
  	break;}  }
  	if(isprime)
  	printf("given number is prime");
  	else
  	printf("it is not a prime number");
  
 return 0;	
}
