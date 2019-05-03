main()
{
    char s[30];
    printf("Enter A String:\n");
    gets(&s[0]);
    int count1,count2=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
            count1++;
        if(s[i]==')')
            count2++;
    }
    if(count1=count2)
        printf("0\n");
    else
        printf("1\n");

}
