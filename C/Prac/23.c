main()
{
    int a,b,c;
    printf("Enter two nos\n");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a*b;c++){
              if(c%a==0&&c%b==0)
                break;

    }
    printf("The lcm of two given no is %d",c);
}
