/* #include<algorithm>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void find3no(int a[],int n,int m)
{

    int l,r;
    sort(a,a+n);


    for(int i=0;i<n-2;i++)
    {

        l=i+1;

        r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==m)
            {
                cout<<a[i]<<","<<a[l]<<"and"<<a[r]<<endl;
                  break;
            }
            else if(a[i]+a[l]+a[r]<m)
                l++;
            else
                r--;





        }
    }



}
int main()
{
     int n,m;
     cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;

    find3no(a,n,m);
    return 0;
}
*/
#include<algorithm>
#include<iostream>
using namespace std;
void find3no(int arr[],int n,int m)
{


    sort(arr,arr+n);
    int temp;


    for(int i=0;i<n-2;i++)
    {

        for(int j=i+1;j<n;j++)
        {
        	temp=m-(arr[i]+arr[j]);
        	if(temp<=arr[j])
        	{
        		break;
        	}
        	else{
        		cout<<arr[i]<<", "<<arr[j]<<" and "<<temp<<endl;
        	}
        }

    }




}
int main()
{
     int n,m;
     cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;

    find3no(a,n,m);
    return 0;
}
