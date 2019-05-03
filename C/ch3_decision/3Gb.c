main()
{     char ch;
    printf("Enter A Character\n");
    scanf("%c",&ch);


    if(ch>=65&&ch<=90)
        printf("Uppercase\n");
    if(ch>=97&&ch<=122)
        printf("Lowercase\n");
    if(ch>=48&&ch<=57)
        printf("NO b/w to 9");
    else
        printf("Special Symbol");

}
