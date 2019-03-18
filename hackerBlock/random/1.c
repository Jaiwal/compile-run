#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{

    int j,i,n,chk=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[i]==0)
            chk=1;
    }

    if(chk=1)
    {
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
