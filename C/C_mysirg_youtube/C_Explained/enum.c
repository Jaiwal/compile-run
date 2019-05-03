
enum boolean
{
    false,true
};

/* int isEven(int x)
{
    if(x%2==0)
       return(1);
    else
        return(0);
}
*/
  enum boolean isEven(int x)
{
    if(x%2==0)
       return(true);
    else
        return(false);
}
void main()
{
    int n;
    enum boolean result;
    printf("Enter a no");
    scanf("%d",&n);
    result=isEven(n);
    if(result==true)
        printf("NO is even");
    else
        printf("NO is odd");
}
