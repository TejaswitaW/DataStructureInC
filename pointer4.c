//pointer to pointer
#include<stdio.h>
int main()
{
    int a=100,*p;
    p=&a;
    printf("Value at p is:%d\n",*p);
    int **q;
    q=&p;
    printf("Value at q is: %d\n",(*(*q)));
    int ***r;
    r=&q;
    printf("Value at r is: %d\n",(*(*(*r))));


}
