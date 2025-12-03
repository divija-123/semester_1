#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("enter your name:");
	scanf("%s",name);
	printf("%s\n",name);
	
	getchar();
	
	char full_name[20];
	printf("Enter full name:");
	fgets(full_name,sizeof(full_name),stdin);
	printf("%s\n",full_name);
}
