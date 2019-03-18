#include<stdio.h>
int main() {
    int n,i,m,j;
    scanf("%d",&n);
    int chk=0;
    int arr[5],arr1[5];

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[j]);
        }

        for(m=0;m<5;m++)
        {
            arr1[arr[m]]=m;

            if(arr1[arr[m]]!=m)
            {
                chk=1;
            }
        }

        if(chk==0)
          printf("True");
         else
          printf("false");



    }
    return 0;
}
