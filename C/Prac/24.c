main()
{
     int a,b,c;
    printf("Enter two nos\n");
    scanf("%d%d",&a,&b);
    for(c=a<b?a:b;c>=1;c--)
        if(a%c==0&&b%c==0)
        break;
    printf("The hcf is %d",c);

}
