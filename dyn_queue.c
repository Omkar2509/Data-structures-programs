#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int ele;
    struct Node *next;
};
struct Node *front, *rear;
void insert()
{
    struct Node *nn,*temp;
    nn=(struct Node*)malloc(sizeof(struct Node));
    printf("\nenter the element to insert in the queue :");
    scanf("%d", &nn->ele);
    if(front==NULL)
    {
        rear=nn;
        front=nn;
        nn->next=NULL;
        printf("\n%d is inserted in the queue\n", nn->ele);
    }
    else
    {
        rear->next=nn;
        nn->next=NULL;
         rear=nn;
         printf("\n%d is inserted in the queue\n", nn->ele);
        
    }


}
void Remove()
{
    struct Node *temp;
     if(front==NULL)
    {
        printf("\nQueue is empty..nothing to remove");
    }
    else
    {
    temp=front;
    front=front->next;
    printf("\n%d is removed from queue ...!\n", temp->ele);
    free(temp);
    }

}
void display()
{
    struct Node *temp;
    if(front==NULL)
    {
        printf("\nQueue is empty..nothing to display");
    }
    else
    {
        printf("\n");
        temp=front;
        while(temp!=NULL)
        {
            printf("\t%d", temp->ele);
            temp=temp->next;
        }
        printf("\n");


    }

}
int main()
{
    front=NULL;
    int choice;
    do
    {
        
        printf("\n1-To insert element in the queue\n2-to remove element from queue\n3-To display queue\n4-to exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            Remove();
            break;
            case 3:
            display();
            break;
        }

    } while (choice!=4);
    return 0;
    
}

