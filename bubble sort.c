#include<stdio.h>
#define max 50

void bubblesort(int array[],int n);
void printsort(int array[], int n);
void swap(int i,int j);

int main()
{
	int i,n=5,array[5]={9,8,7,6,5};
	printf("\nUnsorted Array\t:");
	for(i=0;i<n;i++)
	{
		printf("%d\t ",array[i]);
	}
	printf("\n");
	bubblesort(array,n);
	return 0;
}

void bubblesort(int array[],int n)
{
	printf("\n\t\t________Bubble Sort_______\n\n");
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				flag=1;
				swap(array[j],array[j+1]);
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
				printsort(array,n);
			}
			else{
				printf("not swap:\t");
				printsort(array,n);
			}
		}
		if(flag==0)
		{
			printf("\nAfter %d iteration array is sorted.",i+1);
			printf("\nSorted:\t\t");
			printsort(array,n);
			printf("\n");
			break;
		}	
		else{
			printf("After %d iteration:",i+1);
			printsort(array,n-i);
			printf("\n");
		}
	
	}
}

void printsort(int array[], int n)
{
   int i;
   for (i=0;i<n;i++)
       printf("%d\t ", array[i]);
   printf("\n");
}

void swap(int i,int j)
{
	printf("swap(%d,%d):\t",i,j);
}

