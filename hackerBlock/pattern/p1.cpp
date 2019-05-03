#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {    if(i%2!=0)
        cout<<i<<"\n";
    }
    for(int i=0;i<n;i++)
    {  int m=i+1;
          if(m%2==0)
        cout<<m<<"\n";
    }
    return 0;
}
