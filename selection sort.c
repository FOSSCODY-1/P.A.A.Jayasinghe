#include<stdio.h>
#define max 50

int selectsort(int array[],int n);
void printsort(int array[],int n);
void printunsort(int array[],int start,int n);
void swap(i,j);

int main()
{
	int i,n,array[max];
	printf("Number of Inputs:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\nUnsorted Array\t:");
	for(i=0;i<n;i++)
	{
		printf("%d\t ",array[i]);
	}
	printf("\n");
	selectsort(array,n);
	
}

int selectsort(int array[],int n)
{
	printf("\n\t\t________Selection Sort_______\n");
	int min,i,j,temp;
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(array[min]>array[j])
			{
				min=j;
			}
		}
		if(min!=i){
			swap(array[i],array[min]);
		}
		temp=array[min];		//swap min with array[i]
		array[min]=array[i];
		array[i]=temp;
		
		printsort(array,i+1);
		printunsort(array,i+1,n);
	}
	printsort(array,i+1);
}

void printunsort(int array[],int start,int n)
{
	int i;
	printf("Unsorted Array:\t ");
	for (i=start; i < n; i++)
       printf("--------");
    printf("\n\t\t|");
	for (i=start; i < n; i++)
       printf(" %d\t| ", array[i]);
    printf("\n\t\t ");
    for (i=start; i < n; i++)
       printf("--------");
	printf("\n");
}

void printsort(int array[], int n)
{
   int i;
    printf("\n");
   printf("Sorted Array:\t ");
	for (i=0; i < n; i++)
       printf("--------");
    printf("\n\t\t|");
	for (i=0; i < n; i++)
       printf("  %d\t| ", array[i]);
    printf("\n\t\t ");
    for (i=0; i < n; i++)
       printf("--------");
   printf("\n");
}

void swap(i,j)
{
	printf("\nswap(%d,%d)",i,j);
}
