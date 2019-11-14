#include <stdio.h>
#include <stdlib.h>

struct node {
   int data; 
	
   struct node *lc;
   struct node *rc;
};


struct node *root ;


void inorder(struct node*ptr)
{if(ptr!=NULL)
  {inorder(ptr->lc);
   printf("%d ",ptr->data);
   inorder(ptr->rc);
  }
}


void preorder(struct node*ptr)
{if(ptr!=NULL)
  {
   printf("%d ",ptr->data);
   preorder(ptr->lc);
   preorder(ptr->rc);
  }
}


void postorder(struct node*ptr)
{if(ptr!=NULL)
  {
    postorder(ptr->lc);
    postorder(ptr->rc);
    printf("%d ",ptr->data);
  }
}



struct node* getnode(int x)
{
   struct node *ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data=x;
    ptr->lc=NULL;
    ptr->rc=NULL;
    return ptr;
}




 struct node* search( struct node*ptr,int x)
 {
   if(ptr->data==x)
     return ptr;
   if(ptr->lc!=NULL)
     search(ptr->lc,x);
   if(ptr->rc!=NULL)
     search(ptr->rc,x);
   if(ptr->rc==NULL && ptr->lc==NULL)
     return NULL;
 } 

void insert(int prt, int x)
{
  struct node *pt;
  int op=0;
  struct node *new ;
  pt= search(root,prt);
  printf("\n\n%d\n\n",pt->data);
  if(pt==NULL)
       printf("Parent not found !!");     
  else
    { if(pt->lc==NULL||pt->rc==NULL)
      {
       new=getnode(x);
       if(pt->lc==NULL && pt->rc==NULL)
       { 
         printf("\nInsert node as -\n1.Right Child\n2.Left Child\n\nChoose any option - ");
         scanf("%d",&op);
       }
       if(pt->rc!=NULL||op==2)
         {pt->lc=new;
          printf("\nNode inserted as left child");}
       else
          {pt->rc=new;
          printf("\nNode inserted as right child");}
      }
      else
        printf("Cannot insert to given node!!");
    } 
             
}

 struct node* parent(struct node*ptr,int x)
 {
   if(ptr->rc->data==x||(ptr->lc->data==x))
     return ptr;
   if(ptr->lc!=NULL)
     search(ptr->lc,x);
   if(ptr->rc!=NULL)
     search(ptr->rc,x);
   if(ptr->rc==NULL && ptr->lc==NULL)
     return NULL;
 } 

void delete(int x)
{
 struct node *pt;
 struct node *prnt;
 pt= search(root,x);
 if(pt->rc==NULL&&pt->lc==NULL)
  {
   prnt=parent(root,x);
   printf("\n%d\n",prnt->data);
   if(pt==prnt->lc)
     prnt->lc=NULL;
   else
     prnt->rc=NULL;

  printf("Node successfully deleted.");
  }
   
 else
  printf("Not a  leaf node");

}


void main()
{   int dt,ch,pd,ed;
    printf("Enter data to root node : ");
    scanf("%d",&dt);
    root=getnode(dt);
  
    while(1)
    {
    printf("\n\n1.Insert\n2.Delete\n3.Traversal\n4.Exit\n\nEnter ur choice - ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : printf("Enter the data of parent elemnt - ");
               scanf("%d",&pd);
               printf("Enter the data to be inserted - ");
               scanf("%d",&ed);
               insert(pd,ed);
               break;
      case 2 : printf("Enter the data of node to be deleted - ");
               scanf("%d",&ed);
               delete(ed);
               break;
      case 3 : printf("\nInorder - ");
               inorder(root);
               printf("\nPreorder - ");
               preorder(root);
               printf("\nPostorder - ");
               postorder(root);
               break;
      default: exit(0);
    }
   }
}               







