main()

{int s;
      printf("Enter the nth no of prime no you wanna know\n");
      scanf("%d",&s);
    int i,j,count=0;
     for( i=1+1;i<10000-1;i++)
     {

            for( j=2;j<i;j++)
         {
                  if(i%j==0)
                break;
            }
            if(i==j){

                count++;
                if(count==s)
                    printf("%d",i);
               // printf("%d",count);

            }


    }





}



