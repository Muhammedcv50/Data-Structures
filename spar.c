#include<stdio.h>
#include<stdlib.h>

void main()
{
 int i,j,r,c,k=1,co=0,cc=0;
 printf("Enter the rows and columns of sparse matrix - ");
 scanf("%d %d",&r,&c);
 int a[r][c];
 
 printf("Enter the values  :- \n");

 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);

printf("Matrice is -");



for(i=0;i<r;i++)
{printf("\n");
for(j=0;j<c;j++)
 printf("%d  ",a[i][j]);
}

 int b[10][3];
 
 b[0][0]=c;
 b[0][1]=r;

 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {if(a[i][j]!=0)
      {
       b[k][0]=i;
       b[k][1]=j;
       b[k][2]=a[i][j];
       co++;
       k++;
      }
    }
  }
 if(co>(r*c)/2)
  {printf("Not a sparse matrix !!! ");
   exit(0);
  }
   
 b[0][2]=co;

 printf("\n\nThree Column representation -\n");
 
 for(i=0;i<=co;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d ",b[i][j]);  
  }
 
 int t[co+1][3];
 
 t[0][0]=b[0][1];
 t[0][1]=b[0][0];
 t[0][2]=b[0][2];

 k=1;
 for(i=0;i<c;i++)
  for(j=1;j<=co;j++)
  {if(b[j][1]==i)
     {t[k][0]=b[j][1];
     t[k][1]=b[j][0];
     t[k][2]=b[j][2];
     k++;
     } 
  }
 

printf("\n\nThree Column representation of transpose -\n");
 
 for(i=0;i<=co;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d ",t[i][j]);  
  }

 k=1;

 int d[r][c];
 
 printf("\n\nEnter the values of second:- \n");

 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf("%d",&d[i][j]);
printf("Matrice is -");

for(i=0;i<r;i++)
{printf("\n");
for(j=0;j<c;j++)
 printf("%d  ",d[i][j]);
}

 int e[10][3];
 
 e[0][0]=c;
 e[0][1]=r;

 for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
    {if(d[i][j]!=0)
      {
       e[k][0]=i;
       e[k][1]=j;
       e[k][2]=d[i][j];
       cc++;
       k++;
      }
    }
  }
 if(cc>(r*c)/2)
  {printf("Not a sparse matrix !!! ");
   exit(0);
  }
   
 e[0][2]=cc;

 printf("\n\nThree Column representation -\n");
 
 for(i=0;i<=cc;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d ",e[i][j]);  
  }
 
 

int g[30][3];


int m=1,n=1,p=1;
while( m<=b[0][2] && n<=e[0][2])
 {if(b[m][0]<e[n][0])
  { g[p][0]=b[m][0];
    g[p][1]=b[m][1];
    g[p][2]=b[m][2];
    p++;
    m++;
   }
   
  else if(b[m][0]>e[n][0])
  { g[p][0]=e[n][0];
    g[p][1]=e[n][1];
    g[p][2]=e[n][2];
    p++;
    n++;
   }
  else if(b[m][1]<e[n][1])
  { g[p][0]=b[m][0];
    g[p][1]=b[m][1];
    g[p][2]=b[m][2];
    p++;
    m++;
   }
  else if(b[m][1]>e[n][1])
  { g[p][0]=e[n][0];
    g[p][1]=e[n][1];
    g[p][2]=e[n][2];
    p++;
    m++;
   }
 else
  { g[p][0]=b[m][0];
    g[p][1]=b[m][1];
    g[p][2]=b[m][2]+e[n][2];
    p++;
    m++;
    n++;
  }

 }

while( m<=b[0][2])
{
 g[p][0]=b[m][0];
    g[p][1]=b[m][1];
    g[p][2]=b[m][2];
    p++;
    m++;
   }
 
while( n<=e[0][2])
{ g[p][0]=e[n][0];
    g[p][1]=e[n][1];
    g[p][2]=e[n][2];
    p++;
    n++; }
g[0][0]=r;
 g[0][1]=c;
g[0][2]=p;

printf("\n\nThree Column representation of Resultant -\n");
 
 for(i=0;i<p;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d ",g[i][j]);  
  }

}
 
