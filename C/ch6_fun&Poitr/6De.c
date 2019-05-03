void prime(int);
int main()
{

    int x;
    printf("Enter the no\n");
    scanf("%d",&x);
    prime(x);
    return 0;
}

void prime(int n)
{

    for(int i=2;n>1;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }

    }
}
