#include <stdio.h>
#include<limits.h>
#include <math.h>
#define MAX_LEN 1000
int str_swap(char s[], char t[]){
    char merg[101];
    int i;
    i=0;
    while(s[i]!='\0'){
        merg[i]=s[i];
        i++;
        
    }
    merg[i]='\0';
    i=0;
    while(t[i]!='\0'){
        s[i]=t[i];
        i++;
    }
    s[i]='\0';
    i=0;
    while(merg[i]!='\0'){
        t[i]=merg[i];
        i++;
    }
    t[i]='\0';
    
}
int main()
{
    char s[MAX_LEN], t[MAX_LEN];
    gets(s);
    gets(t);
    str_swap(s, t);
    puts(s);
    puts(t);
}
