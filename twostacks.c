#include<stdio.h>
int top1=5, top2=4;
int stack[10];
void push(int ele)
{
    if(top1==0)
    {
        printf("\nSTACK OVERFLOW \n");
    }
    else {
        stack[top1-1]=ele;
        printf("%d is pushed in primary stack\n", ele);
        top1--;

    }

}
int poppr()
{
    int pr;
   pr=stack[top1];
   
   stack[top1]=0;
   top1++;
   return pr;

}
void push2(int ele)
{
    stack[top2+1]=ele;
    top2++;

}
int popse()
{
    int se;
    se=stack[top2];
    stack[top2]=0;
    return se;
}
int main()
{
    int choice, ele, temp, temp2, i, j;
    int choice2;
    do
    {
        printf("\n\nEnter 1 for push\nEnter 2 for pop\nEnter 4 for exit\n");
        printf("\nEnter your choice :");
        scanf("%d", &choice);
       switch(choice)
       {
          case 1:
          printf("\nEnter an element to push:");
          scanf("%d", &ele);
          push(ele);
          break;
          case 2 :
          do
          {
          printf("\n\nTo pop from primary, press 1\nTo pop from secondary, press 2\npress 3 for exit\n");
          printf("\nEnter your choice :");
          
          scanf("%d", &choice2);
          switch(choice2)
          {
             case 1:
             temp=poppr();
             push2(temp);
             
             break;
             case 2:
             temp2=popse();
             int choice3;
             do
             {
                  printf("\nupdated stack is \n");
   
    
                 printf("\n\nEnter 1 for restore\nEnter 2 for delete\nEnter 3 for exit\n");
                 printf("\nEnter your choice:");
                 scanf("%d", choice3);
                 switch(choice3)
                 {
                     case 1:
                     push(temp2);
                     printf("Popped element is restored");
                     break;
                     case 2:
                     temp2=0;
                     printf("\nPopped element is deleted");
                     break;
                     case 3:
                     break;



                 }
                 
             } while (choice3!=3);
             break;
             case 3:
             break;
             
             


          }
          break;
          case 3:
          break;
          }while(choice2!=3);
          break;
          case 4:
          break;



       }
    } while (choice!=4);
    
     printf("\nupdated stack is \n");
    for(j=0; j<10; j++)
    {
        printf("%d", stack[j]);
        if(j==4)
        {
            printf("\n-----");
        }
        printf("\n");

    }
    return 0;
    
}