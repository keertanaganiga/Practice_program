#include <stdio.h>
#include<string.h>
int main()
{
    char s[]="raelkear";
    int n=strlen(s);
    char k[n];
    int i,j=0;
    for(i=n-1;i>=0;i--)
    {
        k[j]=s[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=k[i])
        {
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}
