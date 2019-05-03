/* void func(int*,int*);
int main()
{
    int sum,avg;



    func(&sum,&avg);
    printf("Sum=%d\nAverage=%d\n",sum,avg);
    return 0;


}
void func(int *m,int *n)
{

    int n1,n2,n3,n4,n5;
    printf("Enter the Five no\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *m=n1+n2+n3+n4+n5;
    *n=*m/5;


}
*/
#include<stdio.h>
int main(void) {
    int n,i,j,m;
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
	    m=1;
	    printf("\n");
	    for(j=0;j<n;j++)
	    {
	        if(j<=i){
	          printf("%d",m);
	        m++;
	        }
	        else
	          printf("*");

        }


	    }




}
