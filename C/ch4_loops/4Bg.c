#include<stdio.h>
#include<conio.h>
void main()
{
int i,gno,pos=0,neg=0,zero=0;
char ch;

do
    {
      printf("Enter any number  :");
      scanf("%d",&gno);
         if(gno==0)
         zero++;
         else
       if(gno>0)
            pos++;
       else
            neg++;
       printf("\nDo you want to continue press y for yes n for No :  ");
            getchar();
            ch=getchar();
            }while(ch=='y' || ch=='Y');
printf("\n positive Numbers Entered By User Is %d",pos);
printf("\n Negative Numbers Entered By User Is %d",neg);
printf("\nZeroes Entered by User Is %d",zero);
getch();
}
