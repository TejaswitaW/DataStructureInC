//arrays as function argument
#include<stdio.h>
void sum_of_array_ele(int *,int);//(int [],int);is also one declaration
int main()
{
    int s=0,a[]={1,2,3,4,5,6,7},i=0;
    s=sizeof(a)/sizeof(a[0]);//calculated size of array
    sum_of_array_ele(a,s);
    for(i=0;i<s;i++)
    {
        printf("%d\n",a[i]);
    }
}
void sum_of_array_ele(int *a,int s)//(int a[],int s) for above declaration
{
    int i=0;
    for(i=0;i<s;i++)
    {
        a[i]=++a[i];
    }

}
