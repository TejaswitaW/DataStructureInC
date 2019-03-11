//Inserting node at specific position
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    };
struct node *head;
void Insert(int x,int p)
{
        struct node *temp1=(struct node*)malloc(sizeof(struct node));
        temp1->data=x;
        if(p==1)
        {
            temp1->next=head;
            head=temp1;
            return;
        }
        struct node *temp2;
        temp2=head;
        for(int i=0;i<p-2;i++)
        {
            temp2=temp2->next;

        }
        temp1->next=temp2->next;
        temp2->next=temp1;


}
void Print()
{
    struct node *temp;
    temp=head;
    printf("List is:");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    int n=0,x=0,p=0;
    Insert(10,1);
    Print();
    Insert(100,2);
    Print();
    printf("Enter the number of elements you want to insert with position\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the data\n");
        scanf("%d",&x);
        printf("Enter the position where you want to insert\n");
        scanf("%d",&p);
        Insert(x,p);
    }
    Print();

}
