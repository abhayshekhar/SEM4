#include<stdio.h>
int min,max;
void maximun(int a[], int i, int j)
{
    int max1,min1;
    if(i==j)
    {
        max=a[i];
        min=a[i];
    }
    else if (i==(j-1))
    {
        if(a[i] < a[j])
        {
            max = a[j];
            min = a[i];
        }
        else
        {
            max = a[i];
            min = a[j];
        }
    }
    else
    {
        int mid = (i+j)/2;
        maximun(a,i,mid);
        max1=max;
        min1=min;
        maximun(a,mid+1,j);
        if(max<max1)
            max=max1;
        if(min>min1)
            min = min1;

    }
}



int main()
{
    int i,j,n;
    printf("\nPlease enter the number of elements:\n");
    scanf("%d",&j);
    int a[j];
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    maximun(a,0,j-1);
    printf("\nthe value of min is = %d",min);
    printf("\nthe value of max is = %d\n",max);
}
