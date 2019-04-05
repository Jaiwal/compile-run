#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int sum(int x)
{
    int sum=0;
    for(int i=0;i<=x;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}

