#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int power(int n,int p)
{
    int prod=1;
    for(int i=0;i<p;i++)
    {
            prod=prod*n;
    }
    return prod;
}
int main() {
    int n,p;
    cin>>n>>p;
    int m=power(n,p);
    cout<<m;
	return 0;
}

