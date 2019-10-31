#include<stdio.h>

void main()
{
 int n,i,c,f=0,first,last,mid;

 printf("Enter no of elements - ");
 scanf("%d",&n);

 int a[n];

 printf("Enter the elements ( ascending order )- \n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("Enter element to be searched - ");
 scanf("%d",&c);

 first=0;
 last=n-1;
 mid=(first+last)/2;

 while(first<=last)
 {
  if(a[mid]<c)
   {
    first=mid+1;
    mid=(first+last)/2;
   }
  else if(a[mid]>c)
   {
    last=mid-1;
    mid=(first+last)/2;
   }
   else
    {
     printf("Element found at %d\n",mid+1);
    f=1;
    break;
    }
      
  }
   if(f==0)
   {
    printf("Element not found!!!");
   }
}




  /*for(i=0;i<n;i++)
      if(a[i]==c)
      {
       printf("\nElement found at position %d \n",(i+1));
       f=1;
      }
      break;*/
