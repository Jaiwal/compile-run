/*

DECIMAL TO OCTAL
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.


Constraints:
0 < N <= 1000000000

Sample Input:
63
Sample Output:
77
Explanation:
Both input and output are integers


*/


#include<stdio.h>
int main(void) {
    long decimalNo,qtnt;
    int octalNo[100];
    scanf("%ld",&decimalNo);
    qtnt=decimalNo;
    int j,i=1;
    while(qtnt!=0)
    {

        octalNo[i]=qtnt%8;;
        qtnt=qtnt/8;
        i++;


    }
    for(j=i-1;j>0;j--)
    {
        printf("%d",octalNo[j]);
    }
	return 0;
}
