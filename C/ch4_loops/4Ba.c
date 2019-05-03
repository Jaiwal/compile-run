int main()
{
    float op,sum=0;
    int hour ,i=1;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter no of hours worked for the workers\n");
        scanf("%d",hour);

        if(hour>=40)
        {
             op=(hour-40)*12.0;
            printf("Overtime Pya=%f",op);
            sum=sum+op;
            printf("%f",sum);
        }
        else
        {
             op=0;
             printf("No extra time worked");

        }

    }
}
