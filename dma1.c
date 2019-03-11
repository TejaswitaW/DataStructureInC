//dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int *p;
    printf("Address in P is:%d\n",p);
    printf("Address of P is:%d\n",&p);
    //printf("Value at p is :%d\n",*p);//gives run time error

    p=(int*)malloc(sizeof(int));
    *p=10;
    printf("Address we got for P in heap section is:%d\n",p);
    printf("Address of P is:%d\n",&p);
    printf("Value at p is :%d\n",*p);
    free(p);
    p=(int*)malloc(sizeof(int));
    *p=200;
    printf("Address we got for P in heap section is:%d\n",p);
    printf("Address of P is:%d\n",&p);
    printf("Value at p is :%d\n",*p);
    free(p);
}
