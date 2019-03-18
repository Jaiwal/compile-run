/*PRINT SERIES
Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.


Constraints:
0 < N1 < 100
0 < N2 < 100

Sample Input:
10
4
Sample Output:
5
11
14
17
23
26
29
35
38
41
Explanation:
The output will've N1 terms which are not divisible by N2.

*/


#include<stdio.h>
int main(void)  {
    int p,q;
    int count=0, n=1;;


     scanf("%d%d",&p,&q);
     while(count<p)

     {

         if(((3*n+2)%q)!=0)
         {

             printf("%d\n",3*n+2);
             n++;
            count++;
         }
         else
         {
             n++;
         }



     }
	return 0;
}
