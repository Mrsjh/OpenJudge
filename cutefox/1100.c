#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if(n==1)
    printf(
           "      1   2   3   4   5   6\n"
           "  7   8   9  10  11  12  13\n"
           " 14  15  16  17  18  19  20\n"
           " 21  22  23  24  25  26  27\n"
           " 28  29  30");
           if(n==2)
    printf(
           "          1   2   3   4   5\n"
           "  6   7   8   9  10  11  12\n"
           " 13  14  15  16  17  18  19\n"
           " 20  21  22  23  24  25  26\n"
           " 27  28  29  30");
    if(n==3)
    printf(
           "              1   2   3   4\n"
           "  5   6   7   8   9  10  11\n"
           " 12  13  14  15  16  17  18\n"
           " 19  20  21  22  23  24  25\n"
           " 26  27  28  29  30");
       if(n==4)
    printf(
           "                  1   2   3\n"
           "  4   5   6   7   8   9  10\n"
           " 11  12  13  14  15  16  17\n"
           " 18  19  20  21  22  23  24\n"
           " 25  26  27  28  29  30");
          if(n==5)
    printf(
           "                      1   2\n"
           "  3   4   5   6   7   8   9\n"
           " 10  11  12  13  14  15  16\n"
           " 17  18  19  20  21  22  23\n"
           " 24  25  26  27  28  29  30");
                     if(n==6)
    printf(
           "                          1\n"
           "  2   3   4   5   6   7   8\n"
           "  9  10  11  12  13  14  15\n"
           " 16  17  18  19  20  21  22\n"
           " 23  24  25  26  27  28  29\n"
           " 30");
                              if(n==7)
    printf(
           "  1   2   3   4   5   6   7\n"
           "  8   9  10  11  12  13  14\n"
           " 15  16  17  18  19  20  21\n"
           " 22  23  24  25  26  27  28\n"
           " 29  30"
           );
    return 0;
}

/**************************************************************
	Problem: 1100
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/
