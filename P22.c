#include <stdio.h>

int main()
{
   int n;
   printf("Enter the no. of strings : ");
   scanf("%d",&n);
   char s[n][100];
   printf("The array of strings are : ");
   for(int i=0;i<n;i++)
   {
      scanf("%s",s[i]);
   }

   int count = 0;
   for(int i=0;i<n;i++)
   {
      for(int j=i;j<n;j++)
      {
         if(s[i][j] == s[i+1][j])
         {
            count++;
         }
         break;
      }
   }
   printf("%d",count);

   return 0;
}
