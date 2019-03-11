//Pointer to function and call back
#include<stdio.h>
#include<stdlib.h>
void A()
{
    printf("My name is function A called by B ");
}
void B(void (*p)())
{
    p();
}
int main()
{
    B(A);
}
