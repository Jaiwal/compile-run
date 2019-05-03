
main()
{  int i,j,n;
    printf("Enter A No\n");
    scanf("%d",&n);

    for(int i=2;i<n-1;i++){
            for( j=2;j<i;j++)
            if(i%j==0)
            break;
    if(i==j)
        printf("%d\n",i);}



}



