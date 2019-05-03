#include<stdio.h>
int sum(int);
int rsum(int);
int main()
{

    int s,rs;
    int n;


    printf("Enter the no");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum of digit without using the recursion%d\n",s);
    rs=rsum(n);
    printf("Sum of digit without using the recursion%d",rs);

    return 0;

}

int sum(int num)
{
    int remainder,sum=0;
    while(num>0)
    {
        remainder=num%10;
        sum+=remainder;
        num=num/10;


    }
    return(sum);

}

int rsum(int num)
{
    int remainder,sum=0;
    while(num>0)
    {
        remainder=num%10;
        sum=remainder+rsum(num/10);



    }
    return(sum);

}
