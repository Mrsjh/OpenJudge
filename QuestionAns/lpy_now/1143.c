#include<stdio.h>

int print_graphic(int num,int c){
	int i,j;
	for(i=1;i<=num;++i){
		for(j=1;j<=num-i;++j){
			printf(" ");
		}
		for(j=1;j<=2*i-1;++j){
			putchar(c);
		}
		printf("\n");
	}
}

int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

