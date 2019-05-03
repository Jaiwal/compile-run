#include<conio.h>
#include<iostream>
using namespace std;
struct book
{
  private:
    int bookid;
    char title[20];
    float price;
  public:
    void input()
    {

        cout<<"Enter the id,title and price";
        cin>>bookid>>title>>price;

        if(bookid<0)
        {
            bookid=-bookid;
        }
    }

    void display()
    {

        cout<<"\n"<<bookid<<"\n"<<title<<"\n"<<price;
    }
};

int main()
{
    book b1;
    b1.input();
    b1.display();


}
