#include<stdio.h>
#define MAX_STR_LEN 110

int str_cmp(char s1[], char s2[])
{
    int i=0,flag=0,c;
    while(s1[i]==s2[i])
    {
        if(s1[i+1]=='\0'&&s2[i+1]=='\0'&&s1[i]==s2[i])
            flag=1;
        i++;
    }
    c=s1[i]-s2[i];
    if(flag==0)
       return c;
    else
       return 0;
}


int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1138
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

