/*
PATTERN NUMBERS & STARS - 2
Take as input N, a number. Print the pattern as given in the input and output section.


Input Format:
Enter value of N

Output Format:
Print the pattern.

Sample Input:
7
Sample Output:
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567
Explanation:
There is no space between any two numbers. Catch the pattern for corresponding input and print them accordingly.
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

