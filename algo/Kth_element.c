#include<stdio.h>

void merge(int A[],int p,int q, int r);

void mergesort(int A[],int p,int r);



int main()

{ int A[5]={3,6,1,9,4},k;

int p=0, r=4,i;



for(i=0; i<=r;i++)

    printf("%d ",A[i]);

 printf("\n");

mergesort(A,p,r);



    printf("\nEnter the kth largest element:");

    scanf("%d",&k);



    printf("%d is the %d th largest element", A[5-k], k);



}



void mergesort(int A[],int p,int r)

{ int q;

    if(p<r)

{q=(p+r)/2;

mergesort(A,p,q);

 mergesort(A,q+1,r);

 merge(A,p,q,r);



}

}



void merge(int A[],int p,int q, int r)

{

int n1=q-p+1, n2=r-q;

int L[n1+1], R[n2+1],i,j,k;



for(i=0;i<n1;i++)

{L[i]=A[p+i];}

L[n1]='$';

for(j=0;j<n2;j++)

{R[j]=A[q+1+j];}

R[n2]='$';



for(i=0,j=0,k=p;(L[i]!='$'||R[j]!='$');k++)

{ if(L[i]<=R[j])

   {A[k]=L[i];

   i++;}

   else

   {A[k]=R[j];

   j++;}

}

}



