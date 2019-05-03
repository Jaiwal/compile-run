main()
{

    int x,y;
    printf("Enter tha values of x and y\n");
    scanf("%d%d",&x,&y);
    int p=1;
    for(int i=1;i<=y;i++)
        p=p*x;
 printf("The result is %d",p);
}
