#include<stdio.h>
#include<stdlib.h>

typedef struct no              //Defining a node
{
 int data;
 struct no *link;
}node;

node* head1=NULL;
node* head2=NULL;

node* getnode()                  // To return available memory to store nodes
{
 node *a;
 a=(node*)malloc(sizeof(node));
 return a;
}


void display(node *head)           // To display linked list
{
 node *ptr;
 ptr=head->link;
 while(ptr->link!=head )
 {
  printf("%d->",ptr->data);
  ptr=ptr->link;
 }
 printf("%d\n",ptr->data);
}

void insert(node *head,int x)    // To insert to linked list
{
 node *new;
 node *ptr;
 new=getnode();
 ptr=head;
 while(ptr->link!=head )
 {
  ptr=ptr->link;
 }
 new->data=x;
 new->link=head;
 ptr->link=new;
}


void create(node *head)                 // To create a Circular Linked List
{int i,x,n=1;
 while(n!=0)
 {
  printf("Enter the data - ");
  scanf("%d",&x);
  insert(head,x);
  printf("0 to stop or press any key - ");
  scanf("%d",&n);
  }
 printf("\nResultant  CLL -  "); 
 display(head);
 }

 void merge(node *h1,node *h2)             // To merge two CLL's
 {
  node *ptr;
  ptr=h2->link;
  while(ptr->link!=h2 )
  {
  ptr=ptr->link;
  }
  ptr->link=h1->link;
  h1->link=h2->link;
  free(h2);
  display(h1);
  }
  
 void main()
{
 head1=getnode();
 head1->link=head1;


 head2=getnode();
 head2->link=head2;
 

 printf("\nCLL 1 - \n");
 create(head1);

 printf("\n\nCLL 2 - \n");
 create(head2);

 printf("\n\nMerged CLL - \n");
 merge(head1,head2);
}
 









 
 






  




