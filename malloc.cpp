#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the number of integers");
	scanf("%d ",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not avialable");
		exit(1);
	}
	for(int i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
