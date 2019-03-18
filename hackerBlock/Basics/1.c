/*
CHARACTER TYPE
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.


Input Format:
Character (ch)

Constraints:
No constraints

Output Format:
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input:
s
Sample Output:
L


*/
#include<stdio.h>

int main(void) {

    char ch;
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
     printf("U");
    else if(ch>=97&&ch<=122)
     printf("L");
    else
     printf("I");


     return 0;
}
