#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cat(char * t, char * s){
	int i=0;
    while (*(t+i) != '\0')
    {
        i++;
    }
    int p=0;
    while(*(s+p)!='\0'){
    	*(t+i+p)=*(s+p);
    	p++;
	}
	*(t+i+p)='\0';

return t;
    
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}