#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void top1();
void display();
int main()
{
int choice; 
while(1)
{
printf("operation performed by stack\n");
printf("\n1.push \n2.pop \n3.display \n4.top \n5.exit\n");
scanf("%d",&choice);

switch(choice)
{
case 1: push();
        break;
case 2: pop();
        break;
case 3:display();
       break;
case 4:top1();
       break;
case 5:exit(0);
default:printf("invalid choice\n");
}
}
}
void push()
{
int x;
printf("Enter data\n");
scanf("%d",&x);
if(top==N-1)
{
printf("Overflow\n");
}
else
{
top++;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("Underflow\n");
}
else
{
item=stack[top];
top--;
printf("%d poped item\n",item);
}
}

void top1()
{
if(top==-1)
{
printf("Stack is empty\n");
}
else
{
printf("%d\n",stack[top]);
}
}
void display()
{
if(top==-1)
{
printf("Stack is empty\n");
}
else
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}

