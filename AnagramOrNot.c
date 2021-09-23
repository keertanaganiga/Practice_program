#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="keertana";
    char s2[]="anatreet";
    char temp;
    int i,j;
    int n=strlen(s1);
    int n1=strlen(s2);
    
    if(n!=n1)
    {
        printf("Not an angram");
        return 0;
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            if(s2[i]>s2[j])
            {
                temp=s2[i];
                s2[i]=s2[j];
                s2[j]=temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
        {
            printf("Not an angram");
            return 0;
        }   
        
    }
     printf("Anagram");
    return 0;
}
