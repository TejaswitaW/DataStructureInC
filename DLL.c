//Implementation of doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *head;
struct node* Get_New_Node(int d)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=d;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void InsertAtHead(int d)
{
    struct node *newNode;
    newNode=Get_New_Node(d);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void Print()
{
    struct node *temp;
    temp=head;
    printf("Printing in forward direction\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void ReversePrint()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
        return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    printf("Printing in reverse direction\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    InsertAtHead(100);
    InsertAtHead(200);
    InsertAtHead(300);
    InsertAtHead(400);
    InsertAtHead(500);
    Print();
    ReversePrint();


}
