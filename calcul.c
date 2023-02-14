#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(int n1, int n2, char mf)
{
    if (mf == '+') {
        printf("your sum is = %d\n", n1 + n2);       
    }
    if (mf == '-') {
        printf("your sub is = %d\n", abs(n1 - n2));       
    }
    if (mf == '*') {
        printf("your multiplication is = %d\n", n1 * n2);
    }
    if (mf == '/') {
        printf("your devvision is = %d\n", n1 / n2);
    }
    else
        if(mf!='+'&&mf!='-'&&mf!='*'&&mf!='/')
            printf("sorry we still don't have this math function on our program...\n");
}
int main()
{
    calc(2, 3, '*');
}