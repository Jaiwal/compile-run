
main()
{  int s;
  printf("Enter input");
  scanf("%d",&s);
    int i,j,k,n=5,m=1;
    for(i=1;i<=n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d ",m);
            m++;


        }

        printf("\n");
    }
}
