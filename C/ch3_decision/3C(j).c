main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the cordinates x1,y1 for first point\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the cordinates x2,y2 for second point\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the cordinates x3,y3 for Third point");
    scanf("%d%d",&x3,&y3);

    int s1,s2;
    s1=abs(x2-x1)/abs(y2-y1);
    s2=abs(x3-x1)/abs(y3-y1);
    if(s1==s2)
        printf("points are collinear");
    else
        printf("Points are not collinear");
    }
