#include<stdbool.h>
main()
{


int n,h,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }

   for(h=min;h>=1;h--)
   {  bool flag=false;
       for(i=0;i<n;i++){
        if(a[i]%h==0){
           flag=true;
            break;
        }
       }
       return flag;

   }
printf("%d",h);
}
