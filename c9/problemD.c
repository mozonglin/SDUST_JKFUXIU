#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
str_cat(char *s, char *s1){
	int i=0;
	while(*(s+i)!='\0'){
		i++;
	}
	int j=0;
	while(*(s1+j)!='\0'){
		*(s+i+j)=*(s1+j);
		j++;
	}
	*(s+i+j)='\0';
	
}
void str_turn(char*s)
{
    int i,n,t;
    n=strlen(s);
    for(i=0; i<n/2; i++)
    {
        t=*(s+i);
        *(s+i)=*(s+n-i-1);
        *(s+n-i-1)=t;
    }
}


int main() {
    char s[100];
    char s1[100];
    scanf("%s %s",s,s1);
    str_cat(s,s1);
    printf("%s\n",s);
    str_turn(s);
    printf("%s\n",s);
    return 0;
}