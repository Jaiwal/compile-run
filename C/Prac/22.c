
main()
{    int x,n,i;
    printf("Enter a No\n");
    scanf("%d",&n);
    int  sum=0;
    i=n;
    while(i!=0)

    {
        x=i%10;
        sum=sum+(x*x*x);
        i=i/10;
    }
    if(sum==n)
        printf("the no is armstrong");
    else
        printf("the no is not amrs");


}


