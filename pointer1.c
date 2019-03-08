//simple pointer program
#include<stdio.h>
int main()
{
    int a=10,b=100,*p;
    p=&a;
    printf("Value at p is:%d\n",*p);
    printf("Address of at p of a is:%d\n",p);
    printf("Address of a is:%d\n",&a);
    printf("Address of p is:%d\n",&p);
    printf("--------------------------------\n");
    printf("After assigning of address of b\n");
    printf("--------------------------------\n");
    //p=&b;
    *p=b;
    printf("Value at p is:%d\n",*p);
    printf("Address of at p of b is:%d\n",p);
    printf("Address of b is:%d\n",&b);
    printf("Address of p is:%d\n",&p);
    printf("Value of a is %d\n",a);//value get changed to 100 as we did *p=b not p=&b
}
