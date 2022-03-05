#include<stdio.h>
void main()
{
int a[10],i,n,item,flag=0,f,mid,t,l;
printf("\n Enter the size of an array: ");
scanf("%d",&n);
printf("\n Enter the elements in ascending order: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the number to be search: ");
scanf("%d",&item);
f=0;
l=n-1;
for(i=0;i<n;i++)
{
mid=(f+l)/2;
if(a[mid]==item)
{
flag=1;
t==mid+1;
}
else if(a[mid]<item)
{
flag=1;
t=mid+2;
}
else
{
flag=1;
t=mid-2;
}
}
if(flag==1)
printf("The number is found and its position is: %d",t);
else
{
printf("Element not found");
}
}
