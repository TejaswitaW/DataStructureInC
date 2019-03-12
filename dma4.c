//see malloc function initialization
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    printf("Enter value n\n");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("%d\n",p[i]);

    }

    int *q=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
         printf("%d\n",q[i]);


    }
    int z=100;
    printf("%d\n",z);


}
