#include <stdio.h>

void get_nums(int* n)
{
    int t, s = 0;
    while (scanf("%d", &t) != EOF)
        s++;
    *n = s;
}

int main()
{
    int n;
    get_nums(&n);
    printf("%d\n", n);
}

/**************************************************************
	Problem: 1607
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

