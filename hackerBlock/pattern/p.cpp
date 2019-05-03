#include<iostream>
using namespace std;

int main() {
     int n;
     cin >> n;
        int i,j;
     for( i=1;i<=n;i++)
     {
          int m=1;
         for( j=1;j<=n;j++)
         {
             if(j<=i)
             {
                 cout<<m;
             }
             m++;
         }
         cout<<"\n";
     }
}
