#include<math.h>

#include<stdio.h>

void NQueen(int,int);

int place(int,int);

int x[50];

void main(){

    int n;

    printf("Ënter the value of n:\n");

    scanf("%d",&n);

    NQueen(1,n);

}

void NQueen(int k,int n){

    int i,j;

    for(i=1;i<=n;i++){

        if (place(k,i)){

            x[k]=i;

            if(k==n){

                for(j=1;j<=n;j++){

                    printf("%d",x[j]);

                }

                printf("\n");

            }

            else{

                NQueen(k+1,n);

            }

        }

    }

}

int place(int k,int i){

    int j;

    for(j=1;j<=k-1;j++){

        if((x[j]==i)||((abs(x[j]-i))==abs(j-k)))

            return 0;



    }

    return 1;

}
