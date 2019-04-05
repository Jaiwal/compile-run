#include<stdio.h>
#include<math.h>
int main()
{	int  t,x,i;
long n,k,j;
	scanf("%d",&t);
    int index=0,arr[t];
	for(i=0;i<t;i++)
{	long temp=0;
	scanf("%ld%ld",&n,&k);
	for(j=1;j<=n;j++)
	{	temp=pow(k,j);
		if((n-temp)<0){
			break;
		}

	}
	arr[index]=j-1;
	index+=1;
	}

	for(i=0;i<index;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}

	return 0;
}
