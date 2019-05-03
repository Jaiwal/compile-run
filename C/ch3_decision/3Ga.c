main()
{  int n;
    printf("Enter the Year\n");
    scanf("%d",&n);

/*
    if(n%4==0)
    {
       if(n%100==0)
       {
           if(n&400==0)
            printf("Leap Year");
           else
            printf("Not A leap Year");
       }
       else
        printf("Leap Year");
    }
    else
        printf("Not  a Leap Year");

        */



        if(n%4==0&&n%100!=0||n%400==0)
            printf("\nLeap Year");
        else
            printf("Not a Leap Year");
}
