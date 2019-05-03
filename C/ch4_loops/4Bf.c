int main()
{
    int m=21,p,c;
    while(1)
    {
        printf("\n\nNo of Matches %d\n",m);
        printf("pick 1,2,3,4 matchstiks:\n");
        scanf("%d",p);

        if(p>4||p<1)
            continue;
        m=m-p;
        printf("No of mathes left %d",m);

        c=5-p;
        m=m-c;
        if(m==1)
        {
            printf("\n\nNo of matchsticks left are%d",m);
            printf("oops!you lost the game");
            break;
        }



    }
    return 0;

}
