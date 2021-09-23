
#include <stdio.h>

int main()
{
    int arr[]={15,45,34,23,43,15,34,34,23,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count,i,j,freq[n];
    for(i=0;i<n;i++)
    {
        freq[n]=-1;
    }
    
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("The occurence of %d is : %d\n",arr[i],freq[i]);
        }
    }
    
    return 0;
}
