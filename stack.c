#include<stdio.h>
#define max 10
int top=-1;
int stack[max];
void push()
{
    if(top==max-1)
    {
        printf("\nStack overflow\n");
    }
    else
    {
    top=top+1;
    printf("\nEnter the elemenr to push in the stack : ");
    scanf("%d", &stack[top]);
    printf("\n%d is pushed ine the stack ", stack[top]);
    }

}
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow\n");
    }
    else
    {
        printf("\n%d is popped from the stack", stack[top]);
        top--;

    }

}
void display()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("\n%d", stack[i]);
    }

}
int main()
{
    int choice;
    do
    {
        printf("\n1-push\n2-pop\n3-display\n4-exit\n");
        printf("\nEnter your choice :");
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