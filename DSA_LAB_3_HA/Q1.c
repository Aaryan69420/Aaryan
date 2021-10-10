#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next, *prev;
};
void insert(struct node **start, int value)
{
    if(*start == NULL)
    {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode -> data = value;
        newnode-> next = newnode ->prev = newnode;
        *start = newnode;
        return;
    }
    struct node *last = (*start) -> prev, *newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = *start;
    (*start)-> prev = newnode;
    newnode->prev = last;
    last-> next =newnode;
}
void display(struct node *start)
{
    struct node *temp = start;
    printf("\n Circular double linked list \n");
    while(temp->next !=start)
    {
        if(temp==start)
        printf("----");
    else if(temp->next->next == start)
    {
        printf("----");
    }
    else
    {
        printf("-----");
    }
    temp = temp->next;
    }
    printf("\n");
    temp= temp->next;
    while(temp->next !=start)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}
int main()
{
    struct node *start= NULL;
    insert(&start,2);
    insert(&start,4);
    insert(&start,6);
    insert(&start,8);
    insert(&start,10);
    display(start);
    return 0;
}