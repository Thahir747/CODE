#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
void push(int value);
void pop();
void display();
int stack[SIZE],top=-1;
void main()
{
    int value,choice;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push(value);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);

            default: printf("Wrong Selection");
        }    
    }
}
 void push(value)
 {
    if(top==SIZE-1)
    {
    printf("Stack is Full");
    }
    else
    {
        printf("Enter the value to be inserted:");
        scanf("&d",&value);
        top++;
        stack[top]=value;
    
    }
 }
 void pop()
 {
    if(top==-1)
    printf("Stack is empty");
    else
    {
        printf("Deleted %d",stack[top]);
        top--;
    
    }
 }
 void display()
 {
    if(top==-1)
    printf("Stack is empty");
    else
    {
        int i;
        printf("Stack elements are:");
        for(i=top;i>0;i--)
        printf("%d",stack[i]);
    }
 }
