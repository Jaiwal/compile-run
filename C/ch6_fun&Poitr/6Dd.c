void leapyear(int);
int main()
{

    int year;
    printf("Enter the year to be evaluated:\n");
    scanf("%d",&year);
    leapyear(year);
    return 0;
}
void leapyear(int x)
{

    if(x%4==0&&x%100!=0||x%400==0)
        printf("Year is leap");
    else
        printf("year is not a leap year");
}
