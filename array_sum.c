#include <stdio.h>

int main()
{
    int i,sum=0,n;
    int arr[40];
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        
    }
    printf("Sum of array elements are:%d",sum);
    return 0;
}
