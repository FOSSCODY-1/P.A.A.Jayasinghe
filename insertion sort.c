#include<stdio.h>
#define max 50

int insertsort(int array[],int n);
void printsort(int array[], int n);

int main()
{
	int n,array[max];
	
	printf("Number of Inputs:");
	scanf("%d",&n);
	
	int i;
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
	insertsort(array,n);
	printsort(array,n);
}

int insertsort(int array[],int n)
{
	printf("\n\t\t________Insertion Sort_______");
	int i, key, j;
	for (i = 1; i < n; i++)
	{
       key = array[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && array[j] > key)
       {
           array[j+1] = array[j];
           j = j-1;
       }
       array[j+1] = key;
       printsort(array,i);
	}
}

void printsort(int array[], int n)
{
   int i;
   printf("\nSorted Array\t:");
   for (i=0; i < n; i++)
       printf("%d\t ", array[i]);
   printf("\n");
}
