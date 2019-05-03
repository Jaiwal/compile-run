main()
{
     int a ,rev=0,ld;
    printf("Enter a no\n");
    scanf("%d",&a);
    while(a>0)
    {
        ld=a%10;
        rev=(rev*10)+ld;
        a=a/10;


    }
    printf("%d\n",rev);
    if(a==rev)
        printf("\nEqual hai bhai");
    else
        printf("\nNo equal koni be");




}

