#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;

  int x=-1;

    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]==m)
            {


               x=j;

               break;

            }







    }


   cout<<x;
    return 0;

}
