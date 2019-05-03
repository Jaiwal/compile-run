#include<iostream>
using namespace std;
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

    friend ostream& operator<<(ostream&,complex);
     friend istream& operator>>(istream&,complex&);



};

 ostream& operator<<(ostream &dout,complex c)
 {
     cout<<"\na="<<c.a<<"\nb="<<c.b;
     return cout;
 }

 istream& operator>> (istream &din,complex &c){

       cin>>c.a>>c.b;
       return cin;

  }

int main()
{
    complex c1;
    cout<<"Enter the no";
    cin>>c1;   //cin.operator>>(c1)
    cout<<"You Entered";
    cout<<c1;   //operator<<(cout,c1)
    return 0;
}

