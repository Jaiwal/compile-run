main()
{

    for(int i=1;i<=4;i++)
    {   char k='A';
        for(int j=1;j<=7;j++)
            {
                if(5-i>=j||j>=3+i)
                {

                      printf("%c",k);
                    j<4?k++:k--;

                }
                   else
                   {


                    printf(" ");
                    if(j==4)
                        k--;
            }
            printf("\n");
    }

    }
