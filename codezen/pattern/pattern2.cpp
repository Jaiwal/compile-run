#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;
    cin>>n;
    int count=1,k=1;
    for(i=1;i<=n;i++)
    {

        for(j=(2*n-1);j>=1;j--)
        {    if(i>=count/2)
             {
               cout<<k;
               k++;

             }
             else{
                cout<<k;
                k--;
             }
        }

        cout<<"\n";

        count+=2;

    }


    return 0;
}

