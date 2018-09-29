void bubblesort(int array[],int n);
void printbubble(int array[], int n);
void swapbubble(int i,int j);

void bubblesort(int array[],int n)
{
	printf("\n\t\t________Bubble Sort_______\n\n");
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		int flag=0;				//if array is sorted,iteration will stop
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				flag=1;
				swapbubble(array[j],array[j+1]);
				temp=array[j+1];			//swap elements
				array[j+1]=array[j];
				array[j]=temp;
				printbubble(array,n);
			}
			else{
				printf("not swap:\t");
				printbubble(array,n);
			}
		}
		if(flag==0)
		{
			printf("\n\nAfter %d iteration array is sorted.",i+1);
			printf("\nSorted array:\t");
			printbubble(array,n);
			printf("\n");
			break;
		}	
		else{
			printf("After %d iteration unsorted array:\n\t\t",i+1);
			printbubble(array,n-i);
			printf("\n\n");
		}
	
	}
}

void printbubble(int array[], int n)
{
   int i;
   for (i=0;i<n;i++)
       printf("--------", array[i]);
   printf("\n\t\t|");
   for (i=0;i<n;i++)
       printf("  %d\t|", array[i]);
   printf("\n\t\t");
   for (i=0;i<n;i++)
       printf("--------", array[i]);
   printf("\n");
}

void swapbubble(int i,int j)
{
	printf("swap(%d,%d):\t",i,j);
}
