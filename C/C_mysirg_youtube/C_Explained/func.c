/*  takes nothing ,return nothing
 main()
{


    add();
    getch();
}
add()
{

    int a,b,c;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
*/


//takes something return nothing
/*
#include<stdio.h>
#include<conio.h>
void main()
{

    int x,y;
    void add(int ,int );  //func declaration

    printf("Enter two no \n");
    scanf("%d%d",&x,&y);
    add(x,y);


    getch();
}
void add(int a,int b)

{

    int c;
    c=a+b;
    printf("The result is %d",c);


}
*/

//takes nothing return something


/*
int add(void); //genrelly not jaroori
void main()
{
    int s;
    s=add();

    printf("%d\n",s);
      getch();
}
int add()
{

    int a,b,c;
    printf("Enter two no\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
*/

//takes something return something

int add(int,int);
void main()
{

    int s,x,y;
    printf("Enter two no\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("%d",s);
}

int add(int a,int b)
{

    return(a+b);
}















