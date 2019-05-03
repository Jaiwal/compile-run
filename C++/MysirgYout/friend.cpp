
#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using std::cin;
using std::cout;
class complex{
  private:
      int a,b;
  public:
      void setData(int x,int y){

        a=x;
        b=y;

      }

      void showData()
      {

          cout<<"\na="<<a<<"b="<<b;
      }

     friend void fun(complex);


};


void fun(complex c)
{
    cout<<"Sum is"<<c.a+c.b;
}
int main()
{
    complex c1;
    c1.setData(3,4);
    fun(c1);

}

