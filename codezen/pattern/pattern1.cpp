#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;
    cin>>n;
    m=0;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=(i+m);j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        m++;

    }


    return 0;
}
