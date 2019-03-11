//pointer to function
#include<stdio.h>
#include<stdlib.h>
int add (int a,int b)
{
    return(a+b);
}
int main()
{
    int (*p)(int,int);//pointer to function
    int a=100,b=200;
    p=add;
    int c=0;
    c=(*p)(a,b);//c=p(a,b) is also valid
    printf("What is your name\n");
    printf("Value of addition is %d\n",c*2);

}
