
main()
{    int x,n;
    printf("Enter a No\n");
    scanf("%d",&n);
int sum=0;
    while(x!=0)
    {
        x=n%10;
        sum=sum+x;

        n=n/10;
    }
    printf("the digit in a no is %d",sum);

}

