#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x=-1;

    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
      int m;
    cin>>m;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==m){
            x=j;
            break;
        }

    }
    cout<<x;
    return 0;


}
