main()
{   int n,m,j;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target no");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
       for( j=i+1;j<n;j++)
            {
                if((temp+a[j])==m)
                    printf("i=%d,j=%d\n",i,j);

            }

    }

}
