/*

PRINT REVERSE
Take N as input, Calculate it's reverse also Print the reverse.


Constraints:
0 <= N <= 1000000000

Sample Input:
123456789
Sample Output:
987654321
Explanation:
You've to calculate the reverse in a number, not just print the reverse.
*/


#include<stdio.h>
int main(void) {


    int l;
    int LD,RD=0;
    scanf("%d",&l);
    while(l>0)
    {
         LD=l%10;
         RD=(RD*10)+LD;
         l=l/10;

    }
      printf("%d",RD);

	return 0;
}
