#include<stdio.h>
#include<stdlib.h>

void selso(int [],int);
void bubso(int [],int);
void inso(int [],int);

void main()
{
 int i,ch=0,n;
 
 while(ch!='4')
{
 printf("\nEnter no of elements - ");
 scanf("%d",&n);

 int a[n];

 printf("Enter the elements - \n");

 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 printf("Choose a sorting method :- \n1.Selection sort\n2.Bubble sort\n3.Insertion sort\n4.Exit\nChoose any option - ");
 scanf("%d",&ch);

 switch(ch)
 {
  case 1: selso(a,n);
          break;
  case 2: bubso(a,n);
          break;
  case 3: inso(a,n);
          break;
  case 4: exit(0);

  default :printf("Invalid choice!");
 }
 
 printf("Sorted array - \n");

 for(i=0;i<n;i++)
  printf("%d ",a[i]);

 

} 
 
}




void selso(int a[],int n)
{
 int i,j,t,p,e=0,c=0;
 for(i=0;i<n-1;i++)
 {
  p=i;
  for(j=i+1;j<n;j++)
  {
   c++;
   if(a[p]>a[j])
    p=j;
  }
  
  if(p!=i)
  {e++;
   t=a[i];
   a[i]=a[p];
   a[p]=t;
  }
  }
   printf("No of comparison -  %d\n",c);
  printf("No of exchanges -  %d\n",e);

 }

void bubso(int a[],int n)
{
 int i,j,t, count,e=0,c=0;
 for(i=0;i<n-1;i++)
 { 
   count=0;
  for(j=0;j<n-i-1;j++)
  {
   c++;
   if(a[j]>a[j+1])
   {
    count++;
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    e++;
   }
  }
  if (count==0)
    break;
 }
 printf("No of comparison -  %d\n",c);
  printf("No of exchanges -  %d\n",e);

}


void inso(int a[],int n)
{
 int i,j,t,e=0,c=0;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j>0;j--)
   {c++;
    if(a[j]<a[j-1])
     {
       t=a[j];
       a[j]=a[j-1];
       a[j-1]=t;
       e++;
      }
     else
      break;
    }
  }
 printf("No of comparison -  %d\n",c);
  printf("No of exchanges -  %d\n",e);

}





    

 
   
  
 



