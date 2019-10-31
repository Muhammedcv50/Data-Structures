#include<stdio.h>
#include<stdlib.h>

int n,m,i,l;
int top[10];



void push(int a[],int c,int r)
{
 if(top[r]==r*(l-1))
   printf("Stack Overflow!!!");
 else
   {
    a[++(top[r])]=c;
   }
} 

void pop(int a[],int r)
{
 int c;
 if(top[r]==((r-1)*l)-1)
    printf("\nStack Underflow!!!");
 else
  {c=a[top[r]--];
   printf("\nElement with value %d is removed",c);
  }
}
 
void display(int a[],int r)
{
 if(top[r]==((r-1)*l)-1)
   printf("Stack Underflow!!!");
 else
   { printf("\n Stack %d - ",r);
     for(i=((r-1)*l);i<=top[r];i++)
     {
      printf("%d ",a[i]);
      }
   }
} 
 





void main()
{
 int n,m,r,c;
 printf("Enter no of elements in the array - ");
 scanf("%d",&n);
 printf("Enter the no of stacks -");
 scanf("%d",&m);
 l=n/m;
 for(i=1;i<=m;i++)
  {
    top[i]=((i-1)*l)-1;
  
  }
 int a[n];

 

 int op;
 while(1)
 {
   printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter the stack operation- ");
   scanf("%d",&op);
   switch(op)
   {
    case 1:  printf("Enter the stack no  - ");
             scanf("%d",&r);
             if(r>m)
              printf("\nStack doesnt exist -!!");
             else
             {
             printf("Enter the element to be pushed - ");
             scanf("%d",&c);
             push(a,c,r);
             }
             break;
   case 2:  printf("Enter the stack no  - ");
             scanf("%d",&r);
             if(r>m)
              printf("\nStack doesnt exist -!!");
             else
             {
               pop(a,r);
             }
            break;
   case 3:   printf("Enter the stack no  - ");
             scanf("%d",&r);
            if(r>m)
             printf("\nStack doesnt exist -!!");
            else
             display(a,r);
            break;
    default: exit(0);
  }
} 
}

             
