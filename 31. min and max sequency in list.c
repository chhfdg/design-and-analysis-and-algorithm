// C program for the above approach
#include <limits.h>
#include <stdio.h>

// Function to find the minimum and
// maximum element of the array
void findMinimumMaximum(int arr[], int N)
{
	int i;

	// variable to store the minimum
	// and maximum element
	int minE = INT_MAX, maxE = INT_MIN;

	// Traverse the given array
	for (i = 0; i < N; i++) {

		// If current element is smaller
		// than minE then update it
		if (arr[i] < minE) {
			minE = arr[i];
		}

		// If current element is greater
		// than maxE then update it
		if (arr[i] > maxE) {
			maxE = arr[i];
		}
	}

	// Print the minimum and maximum element
	printf("The minimum element is %d", minE);
	printf("\n");
	printf("The maximum element is %d", maxE);

	return;
}

// Driver Code
int main()
{

	int i=0,num,arr[1000];
	printf("Enter the no of elements: ");
	scanf("%d",num);
	for(i=0;i<num;i++)
	{
		printf("Enter element : ");
		scanf("%d",&arr[i]);
	}
	int N = sizeof(arr[0]);

	// Function call
	findMinimumMaximum(arr, N);

	return 0;
}

