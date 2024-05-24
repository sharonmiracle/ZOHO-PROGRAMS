#include <stdio.h>

int main()
{
   int n1, n2;
   printf("Enter the no. of elements in Array 1 : ");
   scanf("%d",&n1);
   int arr1[n1];
   printf("Enter the Array 1 elements : ");
   for(int i=0;i<n1;i++)
   {
      scanf("%d",&arr1[i]);
   }
   printf("Enter the no. of elements in Array 2 : ");
   scanf("%d",&n2);
   int arr2[n2];
   printf("Enter the Array 2 elements : ");
   for(int i=0;i<n2;i++)
   {
      scanf("%d",&arr2[i]);
   }

// Odd Elements in Array 1
   printf("Odd Array : ");
   for(int i=0;i<n1;i++)
   {
      if(arr1[i]%2 != 0)
      {
         printf("%d ",arr1[i]);
      }
   }


//  Even Elements in Array 2
   printf("\nEven Array : ");
   for(int i=0;i<n2;i++)
   {
      if(arr2[i]%2 == 0)
      {
         printf("%d ",arr2[i]);
      }
   }

   return 0;

}
