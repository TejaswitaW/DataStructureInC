//reversing a linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *head;
void Insert(int d)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=head;
    head=temp;
}
void Reverse()
{
    struct node *current,*next,*prev;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

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
int main()
{
    Insert(5);
    Insert(6);
    Insert(10);
    Print();
    Reverse();
    Print();
}
