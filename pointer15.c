//pointer to function which take string as argument
#include<stdio.h>
#include<stdlib.h>
void print(char *wish)
{
    printf("%s\n",wish);
}
int main()
{
    void (*p)(char *);
    p=print;
    //char  ptr="Hello Hi";
    print("hello hibhkj");
}
