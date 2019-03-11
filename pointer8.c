//array and strings
#include<stdio.h>
int main()
{
    char name[]="Tejaswita";
    char *c;
    c=name;
    ++c;
    c++;
    printf("%c",*c);

}
