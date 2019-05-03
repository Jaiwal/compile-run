main()
{   int i,n;
    printf("Enter the size of the array:\t");
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int count=0;
   for(int j=0;j<n;j++)
   {
       if(a[j+1]<a[j])
        count++;
   }
   if(count==1)
    printf("True");
   else if(count==0)
    printf("Perfect increasing array");
   else
    printf("False");
}
