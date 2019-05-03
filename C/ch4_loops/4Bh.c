int main()
{
    int n1,n2,rem,oct,p;
    printf("Enter as no:\n");
    scanf("%d",&n1);
    n2=n1;
    p=oct=0;
    while(n1>0)
    {
        rem = n1%8;
        n1 = n1/8;
        oct = oct + rem * pow(10,p);
        p++;
    }
    printf("octal no for the given no is %d",oct+1);
    return 0;
}
