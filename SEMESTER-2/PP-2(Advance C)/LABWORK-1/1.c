//1:- Enter N elements and print them.

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value for N:-");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the %d element:-",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
   for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}	

//OUTPUT:-

/* Enter the value for N:- 5
Enter the 5 element:-1 3 5 7 9
13579
[Program finished] */
