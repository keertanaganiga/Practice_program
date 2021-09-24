#include <stdio.h>

int main()
{
   int i,j,k;
   int arr[]={10,4,53,10,3,24,3,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               for(k=j;k<n-1;k++)
               {
                   arr[k]=arr[k+1];
               }
               n--;
               j--;
           }
       }
   }
   
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

    return 0;
}
