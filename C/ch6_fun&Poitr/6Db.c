
long power(int,int);
int main()
{

    int a,b;
    long m;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    m=power(a,b);
    printf("The result is %ld",m);
      return 0;
}
long power(int x,int y)
{

    long sum=1;
    for(int i=1;i<=y;i++){
    sum=x*sum;
    }
    return (sum);
}
