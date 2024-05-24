#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
//Find largest element in the array
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
//Fibonacci series
    int a[max];
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<max;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<max;j++)
        {
            if(arr[i]==a[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
   }
   return 0;
}
