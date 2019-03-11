//realloc function use
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    printf("-----------------------------------------\n");
    printf("USE OF REALLOC\n");
    printf("-----------------------------------------\n");

    int *B=(int*)realloc(A,2*n*sizeof(int));
    int *D=(int*)realloc(A,0);//same as free
    /*for(int i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }*/

    for(int i=0;i<2*n;i++)
    {
        printf("%d\n",B[i]);
    }

    int *C=(int*)realloc(NULL,2*n*sizeof(int));//it just create new block
    for(int i=0;i<2*n;i++)
    {
        printf("%d\n",C[i]);
    }

}
