#include <stdio.h>
int main() {
    int i,j, n,m,chk=0;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     scanf("%d",&m);
     for(j=0;j<n;j++)
     {
         if(arr[j]==m)
          chk=1;
     }
      if(chk==1)
      printf("True");
     else{
      printf("false");
     }

      return 0;
}
