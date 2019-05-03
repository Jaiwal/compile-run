main()
{   void swap(int*,int*);
    int a,b;
    printf("Enter two no to be swapped \n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d%d\n",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
