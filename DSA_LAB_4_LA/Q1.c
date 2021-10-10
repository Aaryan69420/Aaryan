#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff, pow;
    struct node *next;
};

void display(struct node *start)
{
    struct node *temp=start;
    while(temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->pow);
        temp = temp->next;
        if(temp!=NULL)
        {
            printf(" + ");
        }
    }
    printf("\n");
}

struct node *createP(int no, int po, struct node **start)
{
    struct node *temp;
    temp=*start;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->coeff = no;
    new->pow = po;
    new->next=NULL;
    if(*start==NULL)
    {
        *start=new;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = new;
    }
    return *start;
}

struct node *addP(struct node **t1, struct node **t2, struct node **result)
{
    struct node *temp1=*t1, *temp2=*t2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->pow > temp2->pow)
        {
            *result=createP(temp1->coeff, temp1->pow, result);
            temp1=temp1->next;
        }
        else if(temp1->pow == temp2->pow)
        {
            *result=createP(temp1->coeff+temp2->coeff, temp1->pow, result);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else
        {
            *result=createP(temp2->coeff, temp2->pow, result);
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL)
    {
        *result=createP(temp1->coeff, temp1->pow, result);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        *result=createP(temp2->coeff, temp2->pow, result);
        temp2=temp2->next;
    }
    return *result;
}

int main(){
    struct node *p1=NULL, *p2=NULL, *res=NULL;
    int n,p;
    int choice = 1;
    printf("\n Enter the nodes in descending order of powers only.\n\n");
    printf("Please Enter 1st Polynomial.\n");
    while(choice == 1){
        printf("Enter Coefficient and power of the node:\t");
        scanf("%d%d", &n, &p);
        p1=createP(n, p, &p1);
        printf("\nEnter 1 to continue or 0 to exit:\t");
        scanf("%d", &choice);
    }
    choice = 1;
    printf("\n Enter the 2nd Polynomial.\n");
    while(choice == 1){
        printf("Enter Coefficient and power of the node:\t");
        scanf("%d%d", &n, &p);
        p2=createP(n, p, &p2);
        printf("\nEnter 1 to continue or 0 to exit:\t");
        scanf("%d", &choice);
    }
    printf("\n1st polynomial:\t");
    display(p1);
    printf("\n2nd polynomial:\t");
    display(p2);
    res=addP(&p1, &p2, &res);
    printf("\nResultant polynomial is:\t");
    display(res);
    free(p1);
    free(p2);
    free(res);
}
