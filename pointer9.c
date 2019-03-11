//string passed to function
#include<stdio.h>
void print(char *c);
int main()
{
    char *c="My name";
    print(c);

}
void print(char *c)
{


    while(*c!='\0')
    {

        printf("%c\n",*c);
        c++;
    }
}
