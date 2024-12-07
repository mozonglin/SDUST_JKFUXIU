#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#define MAX_STR_LEN 1000
int str_len(char s[]){
    int n=0;
    while (s[n]!='\0')
    {
        n++;
    }
    return n;
}

int main()
{
    int n;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", str_len(s));
    return 0;
}
