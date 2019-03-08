//Pointer typecasting program
#include<stdio.h>
int main()
{
    int a=1025,*p;
    p=&a;
    printf("Value at p is %d\n",*p);
    char *p0;
    p0=(char*)p;
    printf("Value at pointer p0 is %d\n",*p0);
    printf("Address of p0:%d\n",p0);
    p0++;
    printf("Value at pointer p0 is %d\n",*p0);
    printf("Address of p0:%d\n",p0);
    p0++;
    printf("Value at pointer p0 is %d\n",*p0);
    printf("Address of p0:%d\n",p0);
    p0++;
    printf("Value at pointer p0 is %d\n",*p0);
    printf("Address of p0:%d\n",p0);


}

