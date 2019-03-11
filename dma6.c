//pointers as function argument
#include<stdio.h>
#include<stdlib.h>
void Print_Hello()
{
    printf("Hello World\n");
}
int * add(int *a ,int *b)
{
    int *c=(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    //printf("Value of addition is:%d\n",c);

    return c;//returning address of local variable so giving run time error
}
int main()
{
    int a=100,b=200;
    int *p=add(&a,&b);
 //   Print_Hello();
    printf("Sum of two numbers is:%d\n",*p);

}
