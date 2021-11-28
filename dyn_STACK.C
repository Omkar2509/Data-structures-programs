#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int ele;
    struct Node *next;
};
struct Node *top;
void push()
{
    struct Node *nn;
    nn=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the value to push in the stack :");
    scanf("%d", &nn->ele);
    nn->next=top;
    top=nn;
    printf("\n%d is pushed in the stack\n", nn->ele);


}
void pop()
{
   struct Node *temp;
    if(top==NULL)
    {
        printf("\nstack is empty, NOthing to display");

    }
    else
{
   temp=top;
   top=top->next;
   printf("\n%d is popped from the stack\n", temp->ele);
   free(temp);
}
}
void display()
{
    struct Node *temp;
    if(top==NULL)
    {
        printf("\nstack is empty, NOthing to display");

    }
    else
    {
    temp=top;
    while(temp!=NULL)
    {
        printf("\n%d", temp->ele);
        temp=temp->next;
    }
    }

}
int main()
{
    top=NULL;
    int choice;
    do
    {
        printf("\n1-push\n2-pop\n3-display\n4-exit\n");
        printf("Entered your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
        }
    } while (choice!=4);
    
}
