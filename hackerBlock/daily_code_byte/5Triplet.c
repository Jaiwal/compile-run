#include<stdio.h>
#include<stdbool.h>
bool find3no(int *,int,int);
int main()
{

    int a[]={1,4,45,6,10,8};
    int sum=24;
    int a_size=sizeof(a)/sizeof(a[0]);
    find3no(a,a_size,sum);
    return 0;
}

bool find3no(int a[],int a_size,int sum)
{

    int l,r;

    for(int i=0;i<a_size-2;i++)
    {

        for(int j=i+1;j<a_size-1;j++)
        {

             for(int k=0;k<a_size;k++)
             {

                 if(a[i]+a[j]+a[k]==sum){
                    printf("Triplet is %d ,%d, %d",a[i],a[j],a[k]);
                    return true;
                    }
             }
        }
    }
    return false;
}
