main()
{
    int age1,age2,age3,y;
    printf("Enter the age of Ram Shyam and ajay \n");
    scanf("%d%d%d",&age1,&age2,&age3);


    if(age1<age2)
    {
        if(age1<age3)
            y=age1;
         else
            y=age3;
    }
    else
    {
        if(age2<age3)
            y=age2;
        else
            y=age3;
    }
    printf("The youngest among all is %d",y);





}


