//pointer to function which does not take any argument
#include<stdio.h>
#include<stdlib.h>
void print_hello()
{
    printf("Hello World\n");
}
int main()
{
    void (*p) ();
    p=print_hello;
    p();
}
