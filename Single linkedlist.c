#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void show(struct node *head)
{
if(head==NULL){
printf("there are no elements in the list");
return;
}
printf("the elements in the list are:\n");
struct node *temp=head;
while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
struct node *insert_at_begining(struct node *head,int n)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node *));
        newnode->data=n;
                    newnode->next=NULL;
                    newnode->next=head;
         head=newnode;
        return head;

}
void insert_at_end(struct node *head,int n)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node *));
    //printf("enter the element u want to insert at end");
    newnode->data=n;
    newnode->next=NULL;
    struct node *temp;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
struct  node *delete_at_beg(struct node *head)
{
   
if(head==NULL){
printf("the list is empty");}
else{
struct node *temp=head;
temp=head;
head=head->next;
free(temp);}
return head;
}
struct node *delete_at_end(struct node *head)
{
struct node *temp,*prenode;
temp=head;
while(temp->next!=NULL)
{
        prenode=temp;
        temp=temp->next;

}
prenode->next=NULL;
free(temp);
return head;
}
int main()
{
    struct node *head=NULL;
    struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node *));
     newnode->data=10;
     newnode->next=NULL;
    head=newnode;
       newnode=(struct node*)malloc(sizeof(struct node *));
    newnode->data=20;
    newnode->next=NULL;
    head->next=newnode;
      newnode=(struct node*)malloc(sizeof(struct node *));
    newnode->data=30;
    newnode->next=NULL;
    head->next->next=newnode;
    show(head);
    head=insert_at_begining(head,50);
    show(head);
    insert_at_end(head,70);
    show(head);
    head=delete_at_beg(head);
    show(head);
    head=delete_at_end(head);
    show(head);
}
