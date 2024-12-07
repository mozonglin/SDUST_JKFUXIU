#include <stdio.h>
#define MAX_STR_LEN 101
char * str_cat(char * t, char * s, int n){
	int p=0;
	while(*(t+p)!='\0'){
		p++;
	}
	int f;
	for(f=0;f<n&&*(s+f)!='\0';f++){
		*(t+p+f)=*(s+f);
	}
	*(t+p+f)='\0';
	return t;
}
int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}
