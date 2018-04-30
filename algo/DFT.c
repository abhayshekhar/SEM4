#include<stdio.h>
#include<math.h>
#include<complex.h>
int main()
{int n,i,j;
printf("enter the value of n");
scanf("%d",&n);
int a[n];
double complex y[n];
printf("enter the values of a \n");
    for(i=0;i<n;i++)
        {scanf("%d",a[i]);

        }

    if(n==1)
    return a;
    double complex w=1,s;
   double complex r =exp((2*3.14*I)/n);
   for(i=0;i<n;i++)
      {s=a[n-1];
      for (j=n-2;j<=0;j--)
        {s=s*w+a[j];

        }
      y[i]=s;
      w=w*r;
      }
      for(i=0;i<=n;i++)
      {
          printf("%lf",y[i]);
      }
}

