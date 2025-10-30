#include<stdio.h>
int main()
{
	int num,sum,rem,number;
	printf("enter a 3 digit number:");
	scanf("%d",&num);
	number = num;
	sum=0;
	while(num!=0)
	{
		rem= num % 10;
		sum+=(rem*rem*rem);
		num=num/10;
	}
		if(number==sum)
	{
	printf("it is an armstrong number.\n", num);
    }
    else
    {
    printf("it is not an armstrong number.\n", num);
	}
	return 0;
	
}
