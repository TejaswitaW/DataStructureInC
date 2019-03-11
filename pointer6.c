//pointers and arrays
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    printf("%d\n",a[0]);
    printf("%d\n",*(&a[0]));
    printf("%d\n",&a[0]);
    printf("%d\n",a);
}
