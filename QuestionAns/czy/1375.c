#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int asd;

int add(int n)
{
    asd=asd+n;
}


int main()
{
    int min, max, sum;    
    scanf("%d%d", &min, &max);    
    while(min <= max)
        sum = add(min++);        
    printf("%d", sum);    
    return 0;
}
/**************************************************************
	Problem: 1375
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

