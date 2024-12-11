#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#include <string.h>
#define N 100
void search(char s[], char ch,int *p){
	int i=0;
	for(i=0;i<strlen(s);i++){
		if(ch==s[i]){
			
			*p=i;
			break;
		}
	}
	if(i==strlen(s)){
		*p=-1;
	}
}
int main()
{ char s[N],ch;
  int index;
  scanf("%s %c",s,&ch);
  search(s,ch,&index);
  printf("%d",index);
  return 0;
}