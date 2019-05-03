#include<iostream>
using namespace std;
class Complex{
private:
    int a,b;
public:
    void set_data(int a,int y)
    {

        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<"\nb="<<b;
    }

   friend operator +(complex,complex);

};
 complex operator*(complex x,complex y)
    {
        complex temp;
        temp.a=x.a+y.a;
        temp.b=x.b+y.b;
        return(temp);

    }



int main()
{

    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(3,4);
    c3=c1+c2;  //c3=c1.operator+(c2)
    c3.showData();
    return 0;
}
