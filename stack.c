#include<stdio.h>
#include<stdlib.h>

int top=-1;
 
int n;

void push(int a[],int c)
{
 if(top==(n-1))
   printf("Stack Overflow!!!");
 else
   {
    a[++(top)]=c;
   }
} 


void display(int a[])
{
 int i;
 if(top==-1)
    printf("\nStack Underflow!!!");
 else
{ printf("\n Stack -");
 for(i=0;i<=top;i++)
  {
   printf("%d ",a[i]);
  }
}
 }

void pop(int a[])
{
 int c;
 if(top==-1)
    printf("\nStack Underflow!!!");
 else
  {c=a[top--];
   printf("\nElement with value %d is removed",c);
  }
}

void retrieve(int a[])
{
 int m,b[10],i,l=top;
 printf("Enter the position of element to be retrieved  - ");
 scanf("%d",&m);
 if(m>top+1)
  printf("\nNo element exist at given position");
 else
{ for(i=l;i>=(m-1);i--)
 {
   b[l-i]=a[i];
   top--;
   
 }
 printf("\nElement with value %d is retrieved",a[i+1]);
 for(i=(l-m);i>=0;i--)
 {
  push(a,b[i]);
 }
}
}



void main()
{
 int c;
 printf("Enter no of elements in stack - ");
 scanf("%d",&n);
 int a[n];
 int op;
while(1)
 {
   printf("\n\n1.Push\n2.Pop\n3.Retrieve\n4.Display\n5.Exit\nEnter the stack operation- ");
   scanf("%d",&op);
   switch(op)
   {
    case 1: printf("Enter the element to be pushed - ");
            scanf("%d",&c);
            push(a,c);
            break;
    case 2: pop(a);
            break;
    case 3: retrieve(a);
            break;
    case 4: display(a);
            break;
    default: exit(0);
   }
  }

}   
	 
   
 
