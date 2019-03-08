//call by reference
#include<stdio.h>
void incr(int *);
int main()
{
    int a=100;
    incr(&a);
    printf("Incremented value of a is %d\n",a);

}
void incr(int *p)
{
    *p=(*p)+1;

}
