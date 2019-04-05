#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a,b,c;
	cin>>a>>b>>c;

	int arr[a+1];
	for(int i=0;i<a;i++)
	arr[i]=i+1;

	int k=0,sum=0,temp=1;
	for(int i=1;i<(1<<a);i++)
	{
		for(int j=0;j<a;j++)
		{
			if(i& (1<<j))
			{

			  temp=temp*arr[j];

			  k++;
			}
		}

		if(k<=b)
		sum=sum+temp;

		temp=1;
		k=0;
	}
	cout<<sum%c;
	return 0;
}
