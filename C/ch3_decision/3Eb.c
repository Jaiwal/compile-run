main()
{
    int i=4,j=-1,k=0,w,x,y,z;
    w=i||j||k;
    x=i&&j&&k;
    y=i||j&&k;
    z=i&&j||k;
    printf("%d\n",w);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
}
