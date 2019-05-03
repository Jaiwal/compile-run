
main()
{

    for(int n=1;n<=1000;n++){
            int  sum=0;
            int x=n;
    while(x!=0)

    {
         int  r=x%10;
        sum=sum+(r*r*r);
        x=x/10;
    }
    if(sum==n)
        printf("%d\n",n);

    }
}



