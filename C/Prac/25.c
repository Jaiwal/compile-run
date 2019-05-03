 main()
{   int i, n;
    printf("Enter A No\n");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)
       if(n%i==0)
          break;

     if(i==n)
       printf("No is  prime\n");
    else
        printf("No is  not prime\n");

}
