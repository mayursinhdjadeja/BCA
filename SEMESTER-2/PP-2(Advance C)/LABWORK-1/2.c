//2:- Enter N elements and find total and average

#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter the vlue for N:-");
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
	
	//Sum of elements in array
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	
	printf("\nThe sum of array is:-%d",sum);
		
	//avg of array
	avg=sum/n;
	
	printf("\navg of array is:-%f",avg);
	
	return 0;
}	

//OUTPUT:-
/*Enter the vlue for N:- 5
Enter the 5 element:-1 3 5 7 9
13579
The sum of array is:-25
avg of array is:-5.000000
[Program finished]*/  
