//reversing linked list using recursion
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
void Reverse(struct node* p)
{
    if(p->next=NULL)
    {
        head=p;
        return;
    }
    Reverse(p->next);
    struct node *q;
    q=p->next;
    q->next=p;
    p->next=NULL;
}
void Print(struct node* p)
{
    if(p==NULL)
        return;
    printf("%d ",p->data);
    Print(p->next);//output is 10,20,30,40,50
    //printf("\n");
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
    Print(head);
    Reverse(head);
    Print(head);


}
