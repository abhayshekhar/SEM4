#include<stdio.h>
#include<limits.h>
#define size 10
void matrix_chain_order(int n,int p[]){
    int i,l,k,q,j;
    int M[size][size],S[size][size];
    for(i=1;i<=n;i++)
            M[i][i]=0;
    for(l=2;l<=n;l++){
        for(i=1;i<=n-l+1;i++){
            j=i+l-1;
            M[i][j]=INT_MAX;
            for(k=i;k<=j-1;k++){
                q=M[i][k]+M[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<M[i][j]){
                    M[i][j]=q;
                    S[i][j]=k;
                }
            }
            }
    }
print_optimal(S,1,n);

}
void print_optimal(int S[size][size],int i, int j){
    if(i==j)
        printf("A%d ",i);
    else{
        printf("(");
        print_optimal(S,i,S[i][j]);
        print_optimal(S,S[i][j]+1,j);
        printf(")");
    }
}
void main(){
    int i,n;
    printf("Enter the number of matrices :\n");
    scanf("%d",&n);
    int P[n+1];
    printf("Enter the sequence of dimensions:\n");
    for(i=0;i<=n;i++)
        scanf("%d",&P[i]);
    matrix_chain_order(n,P);


}

