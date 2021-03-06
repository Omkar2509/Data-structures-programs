/*This is a program to convert static stack elements into dynamic linked list..*/
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int ele;
    struct Node *next;
};//structure for a Node 
struct Node *first;//declaring the pointer first of Node so that we can use it anywhere in the program..
void convert(int a)
{
    struct Node *nn, *temp;
    nn=(struct Node*)malloc(sizeof(struct Node));
    nn->ele=a;
    if(first==NULL)
    {
        first=nn;
         nn->next=NULL;
    }
    else{
        temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=nn;
        nn->next=NULL;
        

    }
   

}
void display()
{
    struct Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        printf("\t%d", temp->ele);
        temp=temp->next;
    }

}
int main()
{
    first=NULL;
    int a[10];
    int i;
    printf("\nEnter the elements to insert an array : \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
         convert(a[i]);
    }
    display();
    return 0;
}
