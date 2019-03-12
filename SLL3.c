//delete node in singly linked list from nth position
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head;
void Insert(int d,int p)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    if(p==1){
    temp->next=head;
    head=temp;
    return;
    }
    struct node *temp1;
    temp1=head;
    for(int i=0;i<p-2;i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;

}
void Print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void Delete(int p)//p is the position to be deleted
{
    struct node *temp1,*temp2;
    temp1=head;
    for(int i=0;i<p-2;i++)
    {
        temp1=temp1->next;//temp1 is p-1th node
    }
    temp2=temp1->next;//temp2 is the node which we want to delete
    temp1->next=temp2->next;
    free(temp2);
}
int main()
{
    int n;
    head=NULL;
    Insert(10,1);
    Insert(20,2);
    Insert(30,3);
    Insert(40,4);
    Insert(50,5);
    Print();
    Delete(3);
    Delete(2);
    Print();
}
