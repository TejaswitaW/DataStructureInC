//use of calloc function
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    printf("Enter the value of number of elements\n");
    scanf("%d",&n);
    int *A;//it should be pointer
    A=(int*)calloc(n,sizeof(int));//calloc initializes memory value with 0
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
