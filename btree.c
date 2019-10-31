#include <stdio.h>
#include <stdlib.h>

struct node {
   int data; 
	
   struct node *lc;
   struct node *rc;
};



struct node* getnode(int x)
{
   struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data=x;
    ptr->lc=NULL;
    ptr->rc=NULL;
    return ptr;
}

struct node* search(struct node* rt,int data) {
   struct node *ptr;
   ptr=rt;
   if(ptr->data=data)
   return ptr;
    
   else
   {
      if(ptr->rc!=NULL)
       search(ptr->rc,data);
      if(ptr->lc!=NULL)
       search(ptr->rc,data);
   }
}

struct node *root ;

void insert(int data,int pdt) {
   struct node *prnt;
   struct node *ptr;
   prnt=search(root,pdt) ;
   ptr->data=data;
   ptr->lc=NULL;
   ptr->rc=NULL;
   if(prnt->rc==NULL)
    { prnt->rc=ptr;
      printf("Node Inserted .. ");}
   else if(prnt->lc==NULL)
     { prnt->lc=ptr;
      printf("Node Inserted .. ");}
   else
     printf("\nNo space to insert!!");
   }


void main()
{   int dt,ch,pd,ed;
    printf("Enter data to root node : ");
    scanf("%d",&dt);
    root=getnode(dt);
  
    while(1)
    {
    printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter ur choice - ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : printf("Enter the data of parent elemnt - ");
               scanf("%d",&pd);
               printf("Enter the data to be inserted - ");
               scanf("%d",&ed);
               insert(ed,pd);
               break;
      default: exit(0);
    }
   }
}               







