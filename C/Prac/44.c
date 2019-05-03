main()
{

     int i,n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int large1=a[0];
    for(i=0;i<n;i++)
    {

        if(a[i]>large1)
            large1=a[i];

    }

    int large2=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large2&&a[i]<large1)
            large2=a[i];
    }

    int large3=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large3&&a[i]<large2)
            large3=a[i];

    }
    if(large3!=-1)
      printf("%d\n",large3);
    else
        printf("%d",large1);
}
