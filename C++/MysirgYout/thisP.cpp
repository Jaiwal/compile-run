#include<iostream>
using namespace std;
class Box{

 private:
     int l,b,h;
 public:
    void set_dimensions(int x,int y,int z)
    {

        this->l=x;
        this->b=y;
        this->h=z;
    }

    void show_dimensions()
    {
        cout<<"\nl="<<l<<"\nb="<<b<<"\nh="<<h;
    }

};

int main()
{

    Box *p,smallBox;
    p=&smallBox;
    p->set_dimensions(3,4,5);
    p-> show_dimensions();
}
