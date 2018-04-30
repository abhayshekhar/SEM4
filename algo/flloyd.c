#include<stdio.h>

#include<limits.h>

#define max 30

#define NIL 9999

int PI[max][max],n;

void floyd_warshall(int w[max][max]);

void printAllPairShortestPath(int PI[max][max],int i,int j);

void main(){

    int i,j,A[max][max],start,end;

    printf("Enter the number of vertices:\n");

    scanf("%d",&n);

    printf("Enter the adjacency matrix:(Enter 1000 if no edge)\n");

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            scanf("%d",&A[i][j]);

        }

    }

     printf("Enter the value of starting node:\n");

    scanf("%d",&start);

    printf("Enter the value of ending node:\n");

    scanf("%d",&end);

    floyd_warshall(A);



    printAllPairShortestPath(PI,start,end);





}

void floyd_warshall(int w[max][max]){

    int i,k,j,D[max][max];

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            D[i][j]=w[i][j];

        }

    }

    for(i=0;i<n;i++){

        for(j=0;j<n;j++){

            if((w[i][j]==0)||(w[i][j]==1000)){

                PI[i][j]=NIL;

            }

            else{

                PI[i][j]=i;

            }

        }

    }

    for(k=0;k<n;k++){

        for(i=0;i<n;i++){

            for(j=0;j<n;j++){

                if(D[i][j]>(D[i][k]+D[k][j])){

                   D[i][j]=D[i][k]+D[k][j];

                    PI[i][j]=PI[k][j];

                }







            }

        }

    }



}

void printAllPairShortestPath(int PI[max][max],int i,int j){

    if(i==j){

        printf("%d ",i);

    }

    else{

        if(PI[i][j]==NIL){

            printf("No path from %d to %d",i,j);}

        else{

            printAllPairShortestPath(PI,i,PI[i][j]);

            printf("%d ",j);

        }

        }

    }


