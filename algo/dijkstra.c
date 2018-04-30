#include<stdio.h>

char Q[100],s1;

int n,s,g[100][100],d[100],p[100],flag[100],count,u;

void initialise ()

{

    int w;

    for(w=1;w<=n;w++)

    {

        d[w]=g[s][w];

        flag[w]=0;

    }

}

void dijkstra()

{

    int min,w;

    initialise();

    count=2;

    while(count<=n)

    {

        min=999;

        for(w=1;w<=n;w++)

        {

            if(d[w]<min && flag[w]==0)

               {

                   min=d[w];

                   u=w;

               }

        }

        flag[u]=1;

        count++;

         for(w=1;w<=n;w++)

         {

             if(((d[u]+g[u][w])<d[w])&& flag[w]==0)

             {

                 d[w]=d[u]+g[u][w];

                 p[w]=u;

             }

         }





    }



}

void main()

{

    int i,j,di;

    printf("\nEnter the number of vertices:");

    scanf("%d",&n);

    printf("\nEnter the vertices:");

    for(i=1;i<=n;i++)

    scanf("%s",&Q[i]);

    getchar();

    printf("Enter the source vertex:");

    scanf("%c",&s1);

     for(i=1;i<=n;i++)

      {

          if(Q[i]==s1)

            s=i;

      }

    printf("\nEnter the adjacency matrix");

    for(i=1;i<=n;i++)

     {

         for(j=1;j<=n;j++)



          {

              scanf("%d",&g[i][j]);

             if(g[i][j]==0)

             g[i][j]=999;

          }

     }





    dijkstra();

    printf("\n");

    d[s]=0;

     for(i=1;i<=n;i++)

     {

         if(p[i]==0)

            p[i]=p[i]+1;



     }

     printf("\n");

     for(i=1;i<=n;i++)

     {

         if(d[i]==999)

         {

             printf("\nDistance of node %c from %c =NULL\n",Q[i],s1);

             printf("\nPredecessor of node %c =NULL \n",Q[i]);

         }

         else

         {

             printf("\nDistance of node %c from %c = %d",Q[i],s1,d[i]);

             di=i;

             printf("\nPredecessor of node %c:",Q[i]);

             do

             {

                 printf("%c-->",Q[di]);

                 di=p[di];



             }while(di!=s);

             printf("%c\n",s1);

         }

     }



}
