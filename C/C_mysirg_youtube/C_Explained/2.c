main()
{
    while(1)
    {//evaluated as true
    int choice ,a,b,s;


    printf("\n 1.Addition");
    printf("\n 2.Odd-Even");
    printf("\n 3.Print first n natural no");
    printf("n 4.Exit");
    printf("\n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
        printf("Enter the two no");
        scanf("%d%d",&a,&b);
        s=a*b;
        printf("\nSum is %d",s);
        break;
    case 2:
        printf("Enter the no");
        scanf("%d",&a);
        if(a%2==0)
            printf("Even No");
        else
            printf("Odd No");
        break;
    case 3:
        printf("Enter a number");
        scanf("%d",&a);
        for(b=1;b<=a;b++)
            printf("%d",b);
        break;
    case 4:
        exit(0);  //program k bhara aajayenge
    default :
        printf("Invalid Choice ");







    }





getch();
    }
}

