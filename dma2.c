//dynamic memory allocation using calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    //int A[n];//invalid gives compilation error
    int *A=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        A[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }


}
