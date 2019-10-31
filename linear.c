#include<stdio.h>

void main()
{
 int n,i,c,f=0;

 printf("Enter no of elements - ");
 scanf("%d",&n);

 int a[n];

 printf("Enter the elements - \n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("Enter element to be searched - ");
 scanf("%d",&c);

 for(i=0;i<n;i++)
   if(a[i]==c)
    {
     printf("\nElement found at position %d \n",(i+1));
     f=1;
    }

  if(f==0)
   {
    printf("Element not found!!!");
   }
 int j,t,p;
 for(i=0;i<n-1;i++)
 {
  p=i;
  for(j=i+1;j<n;j++)
  {
   if(a[p]>a[j])
    p=j;
  }
  
  if(p!=i)
  {
   t=a[i];
   a[i]=a[p];
   a[p]=t;
  }
 }
printf("Sorted array - \n");

 for(i=0;i<n;i++)
  printf("%d ",a[i]);

}
