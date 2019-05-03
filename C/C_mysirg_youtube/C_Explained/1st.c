 #include<windows.h>
 #include<stdio.h>

 main()
{
    void gotoxy(int x,int y)
    {
        COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

    }

   int a,b;
gotoxy(20,8);
printf("Enter two no to be multiplied");
gotoxy(20,9);
scanf("%d",&a);
gotoxy(20,10);
scanf("%d",&b);
gotoxy(20,11);
printf("The product of given two no is %d ",a*b);
 int i;
for ( i=0;i<10;i++)
{
    gotoxy(20,i);
    printf("yoyo h ");
}

  getch();

}
