#include<stdio.h>
#include<string.h>

int main(){
    char ch[200];
    gets(ch);
    int l=strlen(ch);
    int i;
    for(i=l-1;i>=0;--i){
        putchar(ch[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1092
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

