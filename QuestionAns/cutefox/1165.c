#include <stdio.h>
int main()
{
int i, j, k,m,n;
scanf("%d", &n);
for (i=1; i<=n;i++)
{
for (j=1;j<=n-i;j++)
printf(" ");
for (k=1;k<=2*i-1;k++)
{
    if(i>=10)
        m=i%10;
    else
        m=i;
 printf("%d",m);
}
printf("\n");
}
return 0;
}

/**************************************************************
	Problem: 1165
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

