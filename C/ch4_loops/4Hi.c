#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,m=1,n=4;
for (i=1;i<=n;i++) // decided the number of rows i.e., 4
{
    for(k=0;k<=n-i;k++) // printing spaces
    {
        printf(" ");
    }
    for(j=0;j<i;j++) // deciding number of values to be printed in each rows
    {
        printf("%d ",m);

    }
    printf("\n");
}

}
