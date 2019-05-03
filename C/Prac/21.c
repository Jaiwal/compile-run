
main()
{    int rev=0,n;
    printf("Enter a No\n");
    scanf("%d",&n);

    while(n!=0)
    {
        int x=n%10;
        rev=(rev*10)+x;

        n=n/10;
    }
    printf("the digit in a no is %d",rev);

}


