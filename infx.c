#include<stdio.h>
#include<string.h>

int top=-1;

int prec(char s)
{
 if(s=='^')
   return 3;
 else if(s=='*'||s=='/')
   return 2;
 else if(s=='+'||s=='-')
   return 1;
 else
   return 0;
}

void main()
{
 char a[20],b[10],s[15];
int l,bi=-1;
 printf("Enter the infix expression - ");
 scanf("%s",a);
 
 l =strlen(a);
 
 for(i=0;i<l;0)
 
 }
