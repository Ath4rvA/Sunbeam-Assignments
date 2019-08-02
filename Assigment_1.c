#include<stdio.h>

int main()
{
	int arr[10];
	int temp, i=0, j=0, n;
	printf("Enter the array size: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<n; i++)
	{

		for(j=i+1;j<n;j++)
			{

				if(arr[i]<0 || arr[j]<0)
					continue;
			
			
				else
				{
					if(arr[i]> arr[j])
				
					{
						temp= arr[i];
						arr[i]= arr[j];
						arr[j]= temp;
					}
				}

			}
	}

	for(i=0; i<n; i++)
	{
		printf("\n%d", arr[i]);
	}
	return 0;
}