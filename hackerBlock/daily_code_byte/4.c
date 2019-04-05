#include <stdio.h>
int fib(int b)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[b+1];
  int i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= b; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }

  return f[b];
}
int main() {
    int n,i,x;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);


    }
    for(i=0;i<n;i++)
   {
         x=fib(arr[i]);
          printf("%d\n",x);
    }



}


