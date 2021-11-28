#include<stdio.h>
int q[10];
int f=0, r=-1;
void insert()
{
    if(r==9)
    {
        printf("\nQUEUE OVERFLOW\n");

    }
    else
    {
    int temp;
    printf("Enter an element to insert ina an queue :");
    scanf("%d", &temp);
    q[r+1]=temp;
    printf("\nELEMENT %d IS ENTERED IN QUEUE", q[r+1]);
    r++;
    }

}
void removeF()
{
    if(f==r+1)
    {
        printf("\nQUEUE UNDERFLOW\n");
    }
    else
    {
        printf("\nELEMENT %d IS REMOVED FROM FRONT END OF QUEUE\n", q[f]);
        q[f]=0;
        f++;
        
    }

}
void removeR()
{
    if(r==f+1)
    {
        printf("\nQUEUE UNDERFLOW\n");
    }
    else
    {
        printf("\nELEMENT %d IS REMOVED FROM REAR END OF QUEUE", q[r]);
        q[r]=0;
        r--;
    }
}
void display()
{
    int i;
    printf("\n\n");
    for(i=0; i<10;i++)
    {
        printf("%d\t", q[i] );
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n\nTO INSERT ELEMENT IN QUEUE PRESS : 1\nTO REMOVE ELEMENT FROM QUEUE PRESS : 2\nTO DISPLAY QUEUE PRESS : 3\nTO EXIT PRESS : 4\n");
        printf("\nENTER YOUR CHOICE :");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2 :
            printf("\nTO REMOVE FROM FRONT END PRESS : 1\nTO REMOVE FROM REAR END PRESS : 2\n");
            int choice1;
            printf("\nEnter your choice :");
            scanf("%d", &choice1);
            switch(choice1)
            {
                case 1:
                removeF();
                break;
                case 2:
                removeR();
                break;
            }
            case 3:
            display();
            break;
        
        

        }
    } while(choice!=4);
    
}