
#include<conio.h>
#include<iostream>
using namespace std;
struct book
{

    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int  main()
{

    book b1;
    //cout<<"Enter the details";
    //cin>>b1.bookid>>b1.title>>b1.price;
    b1=input();
    display(b1);
    return 0;
}
book input()
{      book b;
    cout<<"Enter the details";
    cin>>b.bookid>>b.title>>b.price;
    return(b);
}
void display(book b)
{
    cout<<"\n"<<b.bookid<<b.title<<b.price;

}

