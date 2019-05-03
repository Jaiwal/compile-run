#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using std::cin;
using std::cout;
class complex{
   private:
       int a,b;
   public:
    complex(int x,int y)
    {
         x=a;
         y=b;
    }
    complex (int k)
    {
        a=k;
    }
    complex()
    {
        a=0;
        b=0;
    }
    complex(complex c)
    {
        // a=c.a; wromg
        //b=c.b;
    }
    complex(complex &c)
    {
        // a=c.a;
        //b=c.b;
    }
};
int main()
{

    complex c1=complex(3,4);
    complex c2(5);
    complex c3=9;
    complex c4;
    complex  c5(c1);
     return 0;
}
