#include <stdio.h>
int put_int_sum (int a, int b)
{
    if (a!=0||b!=0)
        printf("%d\n", a+b);
    else {
    	return 0;
    }
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
/**************************************************************
	Problem: 1240
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

