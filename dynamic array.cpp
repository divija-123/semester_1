#include<stdio.h>
int main()
{
	int n,i;
	int student[n];
	printf("enter array size:");
	scanf("%d",&n);
	
	printf("enter the marks of the student:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&student[i]);
}
   printf("marks of student are:");
   for(i=0;i<n;i++)
   {
   	printf("marks of students is : %d\n",student[i]);
   }
  return 0;	
}
