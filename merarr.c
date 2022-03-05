#include<stdio.h>
#include<stdlib.h>
#define N 5
int top=-1;
int stack[N];
void pop();
void push();
void top1();
void disp();
int main()
{
  int ch;
  while(1)
{
  printf("\nMENU\n1.push\n2.disp\n3.pop\n4.top\n5.exit\n");
  printf("enter ur choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:push();
          break;
   case 2:disp();
          break;
   case 3:pop();
          break;
   case 4:top1();
          break;
   case 5:exit(0);
   default :printf("error");
}
}
return 0;
}
void push()
{
 int x;
 if(top==N-1)
{
 printf("stack full");  
}
else
{
 printf("enter an element");
 scanf("%d",&x);
 top++;
 stack[top]=x;
}
}
void pop()
{
 int item;
 if(top==-1)
 {
 printf("stack empty");  
}
else
{
  item=stack[top];
  top--;
 printf("deleted %d",item);
}
}
void disp()
{
 for(int i=0;i<N;i++)
{
 printf("%d",stack[i]);
}
}
void top1()
{
if(top==-1)
 {
 printf("stack empty");  
}
else
{
  printf("%d",stack[top]);  
}
}

