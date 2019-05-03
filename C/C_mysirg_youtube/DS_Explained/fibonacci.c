int fib(int n)
{

    if(n==1||n==2)
        return(1);
    return(fib(n-1)+fib(n-2));
}
int main()
{


   // printf("Enter the term to find:");
    //int m;
   // scanf("%d",&m);
   for(int i=1;i<10;i++)
   {
       printf(" %d",fib(i));
   }

    return 0;
}
