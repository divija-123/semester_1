
#include<stdio.h>
int main()
{
	int a, b, choice,op;
	float result;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("choose a operator");
	scanf("%c",& op);
	switch(op)
	{
		case'+':printf("%d\n",a+b);
		break;
		case'-':printf("%d\n",a-b);
		break;
		case'*':printf("%d\n",a*b);
		break;
		case'/':printf("%d\n",a/b);
		break;
		case'%':printf("%d\n",a%b);
		break;
		default:printf("not a vaild arthematic operator");
	}
	return 0;	
}
