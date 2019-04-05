
#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using std::cin;
using std::cout;
class complex{


    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;

    }
    void show()
    {

        cout<<"\na="<<a<<"\nb="<<b;
    }



};


int main()
{

     complex c1;
    c1.set_data(3,4);
    c1.show();
    return 0;
}
