#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using std::cin;
using std::cout;

int main()
{

    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    int A,B;
    for(int m=0;m<t;m++)
    {
        A=a[m]/4;
        B=a[m]-A;
        cout<<"Case #"<<m+1<<":"<<" "<<A<<" "<<B<<"\n";
    }
    return 0;
}
