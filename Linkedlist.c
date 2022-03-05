#include <stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void insert()
{
struct node *temp;
int val;
temp = (struct node*)malloc(sizeof(struct
node)); if(temp == NULL)
{
printf("\n Queue Overflow");
return;
}
else
{
printf("\n Enter the value");
scanf("%d",&val);
temp -> data = val;
temp -> next = NULL;
if(front == NULL)
front = rear = temp;
else
{
rear -> next = temp;
rear = temp;
}
printf("\n One value is inserted into the queue"); }
}
void delete()
{
struct node *temp;
if(front == NULL)
{
printf("\n Underflow");
return;
}
else
{
temp = front;
front = front -> next;
printf("\n %d is deleted from the queue", temp ->
data); free(temp);
}
}
void display()
{
struct node *temp;
temp = front;
if(front == NULL)
{
printf("\n Empty Queue");
return;
}
else
{
printf("\n Queue elements are");
while(temp != NULL)
{
printf("%d ", temp -> data);
temp = temp -> next;
}
}
}
int main()
{
int ch, e=1;
while(e)
{
printf("\n QUEUE USING LINKEDLIST");
 printf("\n...........MENU...........");
printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY \n4.EXIT"); 
printf("\n..........................");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
e=0;
printf("\n exiting...");
break;
default: printf("\n please enter valid choice"); }
}
return 0;
}
