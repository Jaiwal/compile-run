
long fact(int n)
{
    if(n>0)
        return (n*fact(n-1));
    else
        return (1);


}
main()
{
    int m,p;
    printf("Enter the no:");
    scanf("%d",&m);
    printf("factorial of provided no is %d",fact(m));
    getch();
}
