//5:- Copy the elements of one array into another.

#include <stdio.h>

int main()
 {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n];
    
    printf("Enter %d elements for first array:", n);
    for(i = 0; i < n; i++) 
    {
    	scanf("%d", &arr1[i]);
    }
    
    // Copy elements
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nCopied array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}

//OUTPUT:-

/*Enter the number of elements: 5
Enter 5 elements for first array:1 3 5 7 9

Original array: 1 3 5 7 9
Copied array: 1 3 5 7 9
[Program finished]*/