#include<stdio.h>

void heapify(int A[],int n, int i){

	int largest=i,t;

	int l=2*i+1;

	int r=2*i+2;

	if(l<n&&A[l]>A[largest])

		largest=l;

	if(r<n&&A[r]>A[largest])

		largest=r;

	if(largest!=i)

	{

		t=A[i];

		A[i]=A[largest];

		A[largest]=t;

		heapify(A,n,largest);

	}

}

void heapSort(int A[], int n){

	int i,t;

	for(i=n/2-1;i>=0;i--){

		heapify(A,n,i);

	}

	for(i=n-1;i>=0;i--){

		t=A[0];

		A[0]=A[i];

		A[i]=t;

		heapify(A,i,0);

	}

}

void disp(int A[],int n){

	int i;

	printf("The elements in sorted order are:\n");

	for(i=0;i<n;i++){

		printf("%d",A[i]);

		printf("\n");

	}

}

void main(){

	int n,i;

	printf("Enter the number of elements you want to insert:\n");

	scanf("%d",&n);

	int A[n];

	printf("Enter the elements:\n");

	for(i=0;i<n;i++){

		scanf("%d",&A[i]);

	}

	heapSort(A,n);

	disp(A,n);

}
