#include<stdio.h>
#include "insertion.h"
#include "selection.h"
#include "bubble.h"
#define max 50

int main()
{
	int i,n,array[max];
	printf("\t\tSorting Techniques");
	printf("\n\t\t------------------\n");
	
	printf("Number of Inputs:");
	scanf("%d",&n);
	printf("\nNumbers:\n");
	for(i=0;i<n;i++)
	{
		printf("\t");
		scanf("\t%d",&array[i]);	//acessing elements to array
	}
	
	//printing unsoring array
	printf("\nUnsorted Array\t:");
	for(i=0;i<n;i++)
	{
		printf("--------",array[i]);
	}
	printf("\n\t\t|");
	for(i=0;i<n;i++)
	{
		printf("   %d\t| ",array[i]);
	}
	printf("\n\t\t ");
	for(i=0;i<n;i++)
	{
		printf("--------",array[i]);
	}
	printf("\n");
	
	printf("\n\nSelect Sorting technique:");
	printf("\n\t\t1-Insertion Sort\n\t\t2-Selection Sort\n\t\t3-Bubble Sort");
	
	int choice;
	printf("\n\nWhat technique do you want:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			
			insertsort(array,n);
			break;
			
		case 2:
			selectsort(array,n);
			break;
			
		case 3:
			bubblesort(array,n);
			break;
			
		default:
			printf("Invalid selection");
	}
	
	return 0;
}
