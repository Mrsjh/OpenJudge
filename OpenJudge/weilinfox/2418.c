#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 105

char* str_alcpy(char *t, char *s)
{
    int i=0;
    int j=0;
    while (s[i]!='\0') {
        if (isalpha(s[i])) {
            t[j++]=s[i];
        }
        i++;
    }
    t[j]='\0';
    return t;
}



int main()
{
    char str[MAX_STR_LEN], s[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_alcpy(s, str);
        puts(p);
        puts(s);
    }
}

/**************************************************************
	Problem: 2418
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

