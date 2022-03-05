#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int queue[N];
void enqueue();
void dequeue();
void display();
void top();
int main()
{
 int choice,x;
     
    while(1)    
    {   
        printf("\nOperations performed by queue");
        printf("\n1.enqueue the element\n2.dequeue the element\n3.display\n4.top\n5.Exit");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1:printf("enter the element");
                   scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: top();
                    break;
            case 5: exit(0);
             
            default: printf("\nInvalid choice!!");
        }

    }
return 0;
}
void enqueue(int x)
{
if(rear==N-1)
{
printf("queue is full");
}
else if(front==-1&&rear==-1)
{

front=rear=0;
queue[rear]=x;
}
else
{
rear++;
queue[rear]=x;
}
}
void dequeue()
{

if(front==-1&&rear==-1)
{
printf("underflow");
}
else if(front==rear)
{
front=rear=-1;
}
else
{
printf("element dequeue %d",queue[front]);
front++;
}
}
void display()
{
if(front==-1&&rear==-1)
{
printf("\n empty\n\n");
}
else
{
for(int i=front;i<rear+1;i++)
{
printf("%d",queue[i]);
}
}
}
void top()
{
if(front==-1&&rear==-1)
{
printf("\n empty");
}
else
{
printf("%d",queue[front]);
}
}
