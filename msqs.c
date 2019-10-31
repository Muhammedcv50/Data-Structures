#include<stdio.h>

void main()
{
 int m,n,i,j;

 printf("Enter no of rows and columns - ");
 scanf("%d %d",&m,&n);

 int a[m][n];

 printf("Enter the elements - \n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);

 for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   printf("%d ",a[i][j]);
   printf("\n");
  }

 for(j=0;j<n;j++)
   {
    for(i=m-1;i>=0;i--)
   printf("%d ",a[i][j]);
   printf("\n");
  }

 
 


} 
