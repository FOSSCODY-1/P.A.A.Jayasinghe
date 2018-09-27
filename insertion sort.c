#include<stdio.h>
#define max 50

void insertsort(int array[],int n);
void printinsert(int array,int n);

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

	
	return 0;
}

void insertsort(int array[],int n)
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
       printinsert(array,i);
       
	}
	
}
void printinsert(int array,int n)
{
	int k;
        printf("\nSorted Array\t:");
        for (k=0; k<n; k++)
    		printf("%d\t ", array[k]);
		printf("\n");
}
