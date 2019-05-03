void input(int*);
void display(int*);
void sort(int*);
main()
{
    int a[5];

    printf("Enter The Elements Of Array\n");
    input(a);
    display(a);
    sort(a);
    printf("\n");
    display(a);
    getch();

}
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}
void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        printf("%d\t",*(p+i));
}
void sort(int *p)
{
    int round,t,i;
    for(round=1;round<=4;round++)
    {
       for(i=0;i<=3;i++)
       {
           if(*(p+i)>*(p+i+1))
           {
               t=*(p+i);
               *(p+i)=*(p+i+1);
               *(p+i+1)=t;
           }
       }

    }


}
