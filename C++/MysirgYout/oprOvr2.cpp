#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using std::cin;
using std::cout;
class complex{
  private:
      int a,b;
  public:
      void set_data(int x,int y)
      {
          a=x;
          b=y;
      }
      void show_data()
      {
          cout<<"\na="<<a<<"\nb="<<b;
      }
     complex operator-()
     {
         complex temp;
         temp.a=-a;
         temp.b=-b;
         return (temp);
     }



};

int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(3,4);
    //c3=-c2;
    c3=c1.operator-();
    c3.show_data();
    return 0;
}
