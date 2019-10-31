#include<stdio.h>
#include<stdlib.h>

typedef struct no              //Defining a node
{
 int data;
 struct no *link;
}node;



node* head=NULL;



node* getnode()                  // To return available memory to store nodes
{
 node *a;
 a=(node*)malloc(sizeof(node));
 return a;
}




void ine(int x)    // To insert  to end of linked list
{
 node *new;
 node *ptr;
 new=getnode();
 ptr=head;
 while(ptr->link!=NULL )
 {
  ptr=ptr->link;
 }
 new->data=x;
 new->link=NULL;
 ptr->link=new;
}


void inf(int x)    // To insert to front of linked list
{
 node *new;
 node *ptr;
 new=getnode();
 new->link=head->link;
 head->link=new;
 new->data=x;
}
void ins(int x,int d)    // To insert  to middle of linked list
{
 node *new;
 node *ptr;
 new=getnode();
 new->data=x;
 ptr=head->link;

 if(ptr==NULL)
   printf("LL Empty!!!");

 while(ptr!=NULL )
 {
   if(ptr->data==d)
      break;
   ptr=ptr->link;
 }


 if(ptr->data==d)
   { new->link= ptr->link;
     ptr->link=new;
   }
 else
   printf("Key value not found!!!");
}


void delf()
{
 node *ptr;
 node *ptr1;
 ptr=head->link;
 ptr1=ptr->link;
 head->link=ptr1;
 free(ptr);
}

void dele()
{
 node *ptr;
 node *ptr1;
 ptr=head->link;
  while(ptr->link!=NULL )
 {
  ptr1=ptr;
  ptr=ptr->link;
 }
 ptr1->link=NULL;
 }
 
void delv(int k)
 {   node *ptr;
    node *ptr1;
   ptr=head->link;
   while(ptr!=NULL )
 {
   if(ptr->data==k)
 {ptr1=ptr;
  ptr=ptr->link;
  break;}
    else
     { 
       ptr1=ptr;
       ptr=ptr->link;
     }
   
 }
       ptr1->link=ptr->link;
       free(ptr);
      }
     









void traverse()
{
 node *ptr;
 ptr=head->link;
 if(ptr==NULL)
   printf("LL Empty!!!");
 printf("\n");
 while(ptr->link!=NULL )
 {
  printf("%d->",ptr->data);
  ptr=ptr->link;
 }
 printf("%d\n\n",ptr->data);

}



void create()                 // To create a Circular Linked List
{int i,x,n=1;
 while(n!=0)
 {
  printf("\nEnter the data - ");
  scanf("%d",&x);
  ine(x);
  printf("0 to stop - ");
  scanf("%d",&n);
  }
 printf("\nResultant  LL -  "); 
 traverse();
 }









 int main()
 {
 int k=0,ki,kd,x,d;
 head=getnode();
 head->link=NULL;
 printf("\nCreating LL  - \n\n");
 create(head);
 while(k!=4)
 {
    printf("\n\n1.Insertion\n2.Deletion\n3.Traversal/Display\n4.Exit\n\nChoose any operation - ");
  scanf("%d",&k);

  if(k==1)
  {
   printf("Enter the data to be inserted -");
   scanf("%d",&x);
   printf("\n\n Insertion-\n1.At front\n2.At end\n3.After a key value \n\nChoose any option - ");
   scanf("%d",&ki);

   if(ki==1)
     inf(x);
   else if(ki==2)
     ine(x);
   else
    {
     printf("Enter the key value after which node  to be inserted -");
     scanf("%d",&d);
     ins(x,d);
    }
  }


  else if(k==2)
  {
   printf("\n\n Deletion-\n1.At front\n2.At end\n3.After a key value \n\nChoose any option - ");
   scanf("%d",&kd);

   if(kd==1)
     delf();
   else if(kd==2)
     dele();
   else
    {
     printf("Enter the key value after which node  to be deleted -");
     scanf("%d",&d);
     delv(d);
    
    }
  }


  else if(k==3)
   {
    traverse();
   }

  }
}

 










