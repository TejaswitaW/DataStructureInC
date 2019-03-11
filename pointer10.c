//2D array
#include<stdio.h>
int main()
{
    int B[2][3]={1,2,3,4,5,6};
    int (*p)[3];//parentheses are must
    p=B;//assigning pointer to the 2D array of three integers
    printf("P is %d\n",p);
    printf("B is %d\n",B);
    printf("Address B is %d\n",&B);
    printf("Value at P is %d\n",*p);
    printf("Value at B is %d\n",*B);//*B gives address of first element
    printf("Value at B is %d\n",*B[0]);//gives value at B[0]
    printf("B at next position %d\n",*B[1]);
    printf("Value at this address is %d\n",*B[1]);
}
