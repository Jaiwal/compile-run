main()
{
 for(int i=1;i<=7;i++)
 {
     char ch='A';
     for(int j=1;j<=13;j++)
     {
         if(j<=8-i||j>=6+i){
            printf("%c",ch);
            j>6?ch--:ch++;
         }
            else
            {


            printf(" ");
            if(j==7)
                        ch--;}

     }


printf("\n");
 }



}
