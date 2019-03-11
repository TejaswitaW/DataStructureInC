//function pointer and callback
#include<stdio.h>
#include<stdlib.h>
void A()
{
    printf("I am function A");
}
void B(void (*p)())
{
    p();
}
int main()
{
    void (*p)();
    p=A;
    B(p);

}
