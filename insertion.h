
void insertsort(int array[],int n)
{
	printf("\n\t________Insertion Sort_______");
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
       int k;
    	printf("\nSorted Array\t:");
   		for (k=0; k<n; k++)
    		printf("%d\t",array[k]);
		printf("\n");
       
	}
	
}

