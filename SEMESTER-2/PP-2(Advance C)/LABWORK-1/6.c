//6:- Enter N elements and arrange them in reverse order.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter The Value For n:-");
	scanf("%d",&n);
	
	printf("Enter The %d Element:-",n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("The Array Is:-");
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	
	//Logic To Print Reverse Order Of Array
	
	printf("\nThe Reverse Order Of Array Is:-");
	
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",arr[i]);
	}

	return 0;
}

//OUTPUT:-

/*Enter The Value For n:-5
Enter The 5 Element:-1 2 3 4 5
The Array Is:- 1  2  3  4  5
The Reverse Order Of Array Is:- 5  4  3  2  1
[Program finished]*/