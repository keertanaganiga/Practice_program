#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    int **pt;
    p=&a;
    pt=&p;
    printf("p:%d\n",*p);
    printf("pt:%d\n",pt);
    printf("*pt:%d\n",*pt);
    printf("**pt:%d\n",**pt);
    printf("&a:%d\n",&a);
    return 0;
}
