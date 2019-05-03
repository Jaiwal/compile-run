
main()
{    int x;
    printf("Enter a No");
    scanf("%d",&x);
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("the digit in a no is %d",count);

}
