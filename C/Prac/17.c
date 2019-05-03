main()
{
    int n;
    printf("Enter a no\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
        sum=sum+(2*i-1);
    printf("%d",sum);
}

