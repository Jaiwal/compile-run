long fact(int);
int main()
{

    int num;
    long factorial;
    printf("Enter a number\n");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial of%d=%ld\n",num,factorial);
    return 0;
}
long fact(int num)
{

    int i;
    long factorial=1;
    for(i=1;i<=num;i++)
        factorial=factorial*i;
    return (factorial);
}




