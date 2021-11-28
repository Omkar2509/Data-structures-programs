#include<stdio.h>
int top=-1;
 char stack[50];
void push(char ch)
{
    stack[top+1]=ch;
    top++;
}
char pop()
{
    char ch;
    ch =stack[top];
    top--;
    return ch;
}
int main()
{
    char st[50];
    printf("Enter any string :");
    gets(st);
    int i;
    for(i=0; st[i]!='\0';i++)
    {
        push(st[i]);
        
    }
    printf("\nREversed string is :\n");
    for(i=0;top!=-1;i++)
    {
        char ch=pop();
        printf("%c", ch);
    }
    return 0;
    



}