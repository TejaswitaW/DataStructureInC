//pointer concepts
#include<stdio.h>
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    printf("Output is %d\n",a[0][1]);//output is 2
    printf("Output is %d\n",*(a+1));//it gives address of first array
    printf("Output is %d\n",a[0]);//it gives address
    printf("Output is %d\n",*a[1]);//gives 4 i.e first element of second array
    printf("Output is %d\n",*(a[2]));//gives garbage value
//    printf("Output is %d\n",*(*(a+3)));//gives garbage value
//    printf("Output is %d\n",*a[1]);//gave address of second array
//    printf("Output is %d\n",*a[0]);//gave data element at that address
//    printf("Output is %d\n",*a[1]);
//    //printf("Output is %d\n",a(0));//compilation error
//    //printf("Output is %d\n",*a(0));//compilation error
//    printf("Output is %d\n",(a+1));//gives address
//    printf("Output is %d\n",*(*(a+1)+2));//gives 6
//    printf("Output is %d\n",*a+1);//gives address of 1th elements of first array
//    printf("Output is %d\n",**a);//gave value,1
//    printf("Output is %d\n",*(*a+1))


}
