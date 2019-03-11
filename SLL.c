//implementation of singly linked list,Insert and Print function implementation
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head;
void Insert(int);
void Print();
int main()
{
    head=NULL;
    int n=0,x=0;
    printf("Enter number of elements you want to insert\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data element\n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }





}
void Insert(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=head;
   // head->link=NULL;
    head=temp;

}
void Print()
{
    struct node *temp;
    temp=head;
   /* if(temp==NULL)
    {
        printf("List is Empty\n");
        return;
    }*/
    printf("List is:");
     while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");

}
