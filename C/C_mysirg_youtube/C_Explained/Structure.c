struct Book
{
    int book_id;
    char title[20];
    float price;

};

#include<stdio.h>
struct Book input()
{
    struct Book b;
    printf("Enter Bookid  ,title,and price\n");
    scanf("%d",&b.book_id);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return(b);
};
void display(struct Book b)
{
    printf("\n %d %s %d",b.book_id,b.title,b.price);
}
void main()
{
    struct Book b1;
    b1=input();
    display(b1);
}
