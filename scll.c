#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int ele; 
    struct Node *next;

};
struct Node *first;
void insert_node()
{
    struct Node *nn, *temp, *temp2;
    int ch, sel;
    nn=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the elment to insert in the new NOde : ");
    scanf("%d", &nn->ele);
    if(first==NULL)
    {
        first=nn;
        nn->next=first;
        printf("\n\tFirst node is created successfully!!");
    }
    else
    {
        /* which means first node is already created */
        printf("\nWhere you want insert that node ?");
        printf("\n\t1-to insert at first position\n\t2-to insert at last position\n\t3-to insert at selected position\nEnter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            temp=first;
            nn->next=first;
            while(temp->next!=first)
            {
                temp=temp->next;
            }/* now temp is pointing to last node */
            temp->next=nn;
            first=nn;
            printf("\n\tNode is added at first position...");
            break;
            case 2:
            Check:
            temp=first;
            while(temp->next!=first)
            {
                temp=temp->next;
            }
            temp->next=nn;
            nn->next=first;
            printf("\n\tNode is added at last position...");
            break;
            case 3:
            check:
            printf("\n\tEnter the elemrnt of that node after which want to add new node : ");
            scanf("%d", &sel);
            temp=first;
            while(temp->next!=first)
            {
                if(temp->ele==sel)
                {
                    break;
                }
                temp=temp->next;
            }
            if(temp->next==first&&temp->ele==sel)
            {
                  goto Check;
            }
           else if(temp->next==first)
            {
                printf("\n\tNo such node found!! Please re-enter the element :");
                goto check;
            }
            else
            {
                /* means selected nod found and temp contains address of selected node */
                
                temp2=temp->next;
                nn->next=temp2;
                temp->next=nn;
                printf("\n\tnode is added at selected position...");
            }/* end of inner else */


        }/* end of switch-case */

    }/* end of outer else*/


}/* end of insert_node() */
void remove_node()
{
    struct Node *temp, *temp2;
    int ch, sel;
    if(first==NULL)
    {
        printf("\n\tlist is empty , nothing to remove..");
    }
    else
    {
    printf("\nWhich node yhou want remove from list..? ");
    printf("\n\t1-To remove first node\n\t2-To remove last  node\n\t3-To remove selected node\nEnter your choice : ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        ch :
        temp=first;
        temp2=first;
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        first=first->next;
        temp->next=first;
        free(temp2);
        printf("\n\tFirst node is deleted..!!");
        break;
        case 2:
        ch1:
        temp=first;
        while(temp->next!=first)
        {
            temp=temp->next;
        }
        temp2=first;
        while(temp2->next!=temp)
        {
            temp2=temp2->next; 
        }/* now temp2 will have address of second last node */
        temp2->next=first;
        free(temp);
        printf("\n\tLast node is removed from the list");
        break;
        case 3:
        check2:
        printf("\n\tEnter the element of that node which you want to remove : ");
        scanf("%d", &sel);
        temp=first;
        while(temp->next!=first)
        {
            if(temp->ele==sel)
            {
                break;
            }
            temp=temp->next;
        }
        if(temp->next==first&&temp->ele==sel)
        {
            goto ch1;

        }
       else if(temp->next==first)
        {
            printf("\n\tNO such node is found..please re-enter the element : ");
            goto check2;
        }
        else
        {
            /* means selected node is found and temp is storing the adderess of selected nbode */
            if(temp==first)
            {
                goto ch;
            }
            else
            {
            temp2=first;
            while(temp2->next!=temp)
            {
                temp2=temp2->next;
            }/* now temp2 will contains address of previous node of selected node  */
            temp2->next=temp->next;
            free(temp);
            printf("\n\tSelected node is removed from the list..!");
            break;

        }/* end of inner else */
        }

    
    }/* end of switch-case */
    }/* end of outer else */

}/* end of remove-node() */
void display_list()
{
    struct Node *temp;
    if(first==NULL)
    {
        printf("\nList is Empty, nothing to show..!");
    }
    else{
        temp=first;
        printf("\n");
        do
        {
            printf("%d\t", temp->ele);
            temp=temp->next;
        } while (temp!=first);
        

    }

}
int main()
{
    first=NULL;
    int ch;
    do
    {
        printf("\n\n1-Insert Node\n2-Remove Node\n3-Display List\n4-exit\n\nEnter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            insert_node();
            break;
            case 2:
            remove_node();
            break;
            case 3:
            display_list();
            break;
        }
        
    }while(ch!=4);

}

