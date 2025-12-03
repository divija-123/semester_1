#include<stdio.h>
int main()
{ charoperator;
  int num1,num2;
  printf("enter the expression(eg:2+3)");
  scanf("%d %c %d",num1,operator,num2);
  switch(operator)
  {
  	case'+'
  	printf("result:%d",num1+num2);
  	break;
  	case'-'
  	printf("result:%d",num1-num2);
  	break;
  	case'*'
  	printf("result:%d",num1*num2);
  	break;
  	case'/'
	 printf("result:%d ",num1/num2) ;
	 break;
	 default;
	 printf("not a valid operator");
  }
}
