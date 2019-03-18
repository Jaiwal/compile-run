#include<stdio.h>
int main(void) {
      int n1,n2;
      int out=-1;
      scanf("%d",&n1);
      int arr[n1];
      for(int i=0;i<n1;i++)
      {

          scanf("%d",&arr[i]);
      }
      scanf("%d",&n2);
      for(int i=0;i<n1;i++)
      {

          if(arr[i]==n2){

            out=i;
          }

    }
    printf("%d",out);






	return 0;
}
