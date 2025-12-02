#include<stdio.h>
int main()
{
	int A[50] = {7,9,14,8,10,22,5};
	 printf("%d\n",A[4]);//print a index value
	 printf("before updation %d\n",A[3]);
	 A[3] = 18;
	 printf("after updation %d\n",A[3]);//updating value
	 A[7] = 9;
	 printf("%d",A[7]);//adding new element
	return 0;
}
