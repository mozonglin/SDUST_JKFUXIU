#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cpy(char * t, char * s){
	int f=0;
	while(*(s+f)!='\0'){
		*(t+f)=*(s+f);
		f++;
	}
	*(t+f)='\0';
	return t;
}
int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
