#include<stdio.h>

int main()
{
	struct tuple
	{
		int element1;
		int element2;
		int sum;
	};
	int n, k;
	int arr[10][10];
	arr[0][0]=0;
	int i=0,j=0;
	printf("Enter size of array you want: ");
	scanf("%d", &n);
	for(i=1;i<n+1;i++)
	{
		printf("\nEnter element %d: ", i);
		scanf("%d", &arr[i][0]);
		arr[0][i]= arr[i][0];
	}

	for(i=1; i<n+1; i++)
	{
		for(j=1;j<n+1;j++)
		{
			if (i==j)
				arr[i][j]= 500;
			else
			{
				arr[i][j]= arr[i][0]+ arr[0][j];
			}
		}
	}

	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	

	

	printf("\nEnter the integer whose closest sum you want: ");
	scanf("%d", &k);
	int get_count=0;
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(arr[i][j] < k)
			{
				get_count+=1;
			}
			
		}
	}

	int counter=0;
	struct tuple temp;
	struct tuple tup[get_count];

	for(i=1;i<n+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(arr[i][j] < k)
			{
				tup[counter].element1= arr[i][0];
				tup[counter].element2= arr[0][j];
				tup[counter].sum= arr[i][0]+ arr[0][j];
				counter+=1;
			}
		
		}
	}

	for(i=0;i<get_count;i++)
	{
		for(j=i+1;j<get_count;j++)
		{
			if (tup[i].sum < tup[j].sum)
			{
				temp= tup[i];
				tup[i]= tup[j];
				tup[j]= temp;
			}
		}	
	}

	printf("\nElement 1 is: %d", tup[0].element1);
	printf("\nElement 2 is: %d", tup[0].element2);

	return 0;
}