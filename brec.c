#include<stdio.h>
void bin(int first,int last, int *a,int c)
{
 int mid = (first+last)/2;
 if(first>last)
  printf("Element not found");
 else
   {
    if(a[mid]<c)
      bin(mid+1,last,a,c);
    else if(a[mid]>c)
      bin(first,mid-1,a,c);
    else
      printf("Element found at %d\n",mid+1);
   }
}
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

 bin(first,last,a,c);
}
