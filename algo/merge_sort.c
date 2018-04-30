#include<stdio.h>

int mergesort(int [], int , int);

int merge(int[], int, int, int);

void display(int [], int);

void main()

{

	int n,i;

	printf("Enter the number of elements you want to insert\n");

	scanf("%d",&n);

	int A[n];

	printf("Enter the elements:\n");

	for(i=0;i<n;i++)

	{

		scanf("%d",&A[i]);

	}	

	mergesort(A,0,n-1);

	display(A,n);

}

int mergesort(int A[],int p, int r){

	int q;

	if(p<r){

		q=(p+r)/2;

		mergesort(A,p,q);

		mergesort(A,q+1,r);

		merge(A,p,q,r);

	}

	return 0;

}

int merge(int A[],int l, int m, int h){

	int n1,n2,i,j,k;

	n1=m-l+1;

	n2=h-m;

	int L[n1],R[n2];

	for(i=0;i<n1;i++){

		L[i]=A[l+i];

	}

	for(j=0;j<n2;j++){

		R[j]=A[m+j+1];

	}

	L[i]=99999;

	R[j]=99999;

	i=0;

	j=0;

	for(k=l;k<=h;k++){

		if(L[i]<=R[j])

			A[k]=L[i++];

		else

			A[k]=R[j++];

	}

	return 0;

}

void display(int A[], int size){

	int i;

	printf("The elements in sorted are:\n");

	for(i=0;i<size;i++){

		printf("%d",A[i]);

		printf("\n");

		

	}

}
