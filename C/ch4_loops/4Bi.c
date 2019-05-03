main()
{ int n;

    printf("How many nos you want in your list\n");
    scanf("%d",&n);
     int a[n];
    printf("Enter the no is the array\n");
    for(int i=0;i<=n-1;i++)
    {
         scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("The minimum no in the list is %d\n",min);

    int max=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The maximum no in the list is %d\n\n",max);

    printf("The range of the given list is %d",max-min);

}








