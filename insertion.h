void printinsert(int array[], int n);

void insertsort(int array[],int n)
{
	printf("\n\t________Insertion Sort_______");
	int i,key,j;
	
	for (i=1;i<n;i++) //assume first element is already sorted
	{
       key=array[i];
       j=i-1;
	
		//insert the element into sorted array at correct position
       while(j>=0 && array[j]>key)
       {
           array[j+1]=array[j];
           j=j-1;
       }
       array[j+1]=key;
       
       printinsert(array,i);
       
	}
	
}

void printinsert(int array[], int n)
{
   int i;
   printf("\n\nSorted array:");
   printf("\t");
   for (i=0;i<=n;i++)
       printf("--------", array[i]);
   printf("\n\t\t|");
   for (i=0;i<=n;i++)
       printf("  %d\t|", array[i]);
   printf("\n\t\t");
   for (i=0;i<=n;i++)
       printf("--------", array[i]);
   printf("\n");
}

