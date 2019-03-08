//void pointer
#include<stdio.h>
int main()
{
    int a=10,b=100,*p;
    void *p0;
    p=&a;
    printf("Value at address is %d\n",*p);

    p0=(int*)p;//valid,p0=p is also valid
    p0=&b;
    printf("Value at address is %d\n",*p0)
//warning: dereferencing 'void *' pointer|
}

