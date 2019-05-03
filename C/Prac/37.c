int main()
{
 float sum=0.0;
    for (int i=1;i<=3;i++)
    {
        float fact=1.0;

        for(int j=1;j<=3;j++){
            fact=fact*j;
            sum=sum+i/fact;
    i++;
        }

    }
    printf("%f\n",sum);
    return 0;
}
