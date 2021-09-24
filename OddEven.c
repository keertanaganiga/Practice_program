#include<stdio.h>
#include<string.h>

int main() {
	
	
	int arr[]={12,24,435,67,57,980,90};
	int n=sizeof(arr)/(sizeof(arr[0]));
	int e[n],o[n];
	int i,index=0;
	
	for(i=0;i<n;i++)
	{
	    if((arr[i]%2)==0)
	    {
	        e[i]=arr[i];
	    }
	    else
	    {
	        e[i]=0;
	    }
	}
	
	    
	 for(i=0;i<n;i++)
	{
	   if((arr[i]%2)!=0)
	    {
	        o[i]=arr[i];
	    }
	    else
	    {
	        o[i]=0;
	    }
	}   
	  
	
	printf("\n");
	printf("even numbers:\n");
	for(i=0;i<n;i++)
	{
	    if(e[i]!=0)
	    printf("%d ",e[i]);
	}
	printf("\n");
	printf("Odd numbers:\n");
	for(i=0;i<n;i++)
	{
	    if(o[i]!=0)
	    printf("%d ",o[i]);
	}
	int k[n*2];
	for(i=0;i<n;i++)
	{
	    k[index++]=e[i];
	}
	for(i=0;i<n;i++)
	{
	    k[index++]=o[i];
	}
	printf("\n");
	for(i=0;i<n*2;i++)
	{
	    if(k[i]!=0)
	    printf("%d ",k[i]);
	}
	return 0;
}

