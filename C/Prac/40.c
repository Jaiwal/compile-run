main()
{
int n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }



      int   max1=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
             max1=a[i];

    }


     int max2=a[0];
     for(int j=1;j<=n;j++)
     {
         if(a[j]>max2&&a[j]<max1)
            max2=a[j];
     }
if(max2!=-1)
 printf("%d",max2);
 else
    return -1;
}
