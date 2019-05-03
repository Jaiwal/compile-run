main()
{    int j,a,b;
    printf("Enter Two No B/w which Prime Nos need to be printed");
    scanf("%d%d",&a,&b);

    for(int i=a+1;i<b-1;i++){
            for( j=2;j<i;j++)
            if(i%j==0)
            break;
    if(i==j)
        printf("%d\n",i);


    }

}
