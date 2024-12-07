#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<ctype.h>
#include <string.h>
#define MAX_STR_LEN 101
char *trim(char *s) {
    char *p1 = s;
    char *p2 = s + strlen(s) - 1;

    
    while (isspace(*p1)) {
        p1++;
    }

    
    while (isspace(*p2) && p2 > p1) {
        p2--;
    }

   
    *(p2 + 1) = '\0';

    return p1;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
