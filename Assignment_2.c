#include<stdio.h>

int main()
{
	int arr[30];
	int i, j, n, temp, first, last;
	printf("Enter array size: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("\nEnter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp= arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}

	first= arr[0];
	last= arr[n-1];
	int counter=0;
	int final[last-first];
	for(i= first; i<=last; i++)
	{
		int tp_counter=0;

		for(j=0;j<n;j++)
		{
			if (i== arr[j])
				tp_counter+=1;
		}
		if (tp_counter==0)
		{
			final[counter]=i;
			counter+=1;
		}
	}

	/*for(i=0; i<counter;i++)
	{
		printf("\n%d", final[i]);
	}*/
	int k=0;
	printf("\nEnter the k-th number you want to return: ");
	scanf("%d", &k);
	if(k<=counter)
		printf("\nElement is: %d", final[k-1]);
	else
		printf("\nOut of bounds");
	
	return 0;
}