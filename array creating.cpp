#include<stdio.h>
int main()
{
	int key,i,roll_num[59],n;
	printf("enter n value");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&roll_num[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==roll_num[i])
		{
			printf("element found at index %d",i);
		}
		else
		{
			printf("element not found");
		}
		break;
	}
	return 0;
}
