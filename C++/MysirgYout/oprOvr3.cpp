#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>
using std::cin;
using std::cout;
class integer{
private:
    int x;
public:
   void set_data(int a){

       x=a;
   }
   void show_data(){
     cout<<"\nx="<<x;
   }
   integer operator++()
   {
       integer i;
       i.x=++x;

       return (i);
   }
   integer operator++(int)
   {
       integer i;
       i.x=x++;
       return (i);
   }


};
int main()
{
    integer i1,i2;
    i1.set_data(3);
    i1.show_data();
   // i2=++i1;    // i2=i1.operator++()
   i2=i1++;
    i1.show_data();
    i2.show_data();


    return 0;
}
