#include <stdio.h>
int main()
{
   int a[30],i,j,tmp,n;
    
   
   printf(" Enter the number of elements\n");
   scanf("%d",&n);
   printf("%d",n);
   
   printf("\nEnter %d array elements : \n",n);
   for(i=0;i<n;i++)
      {
	 
	  scanf("%d",a+i);
	  printf("%d\t",*(a+i));
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   printf("\nSorted array using Bubble Sort: \n");
   for(i=0;i<n;i++)
      {
	  printf("%d\t",*(a+i));
	  }         
printf("\n");
return 0;
}