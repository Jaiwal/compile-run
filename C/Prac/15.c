main()
{
     int n;
    printf("Enter a no\n");
    scanf("%d",&n);
int    fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    printf("factorial is: %d",fact);
}
