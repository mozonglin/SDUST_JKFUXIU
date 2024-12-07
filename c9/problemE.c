#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
void sort(char *s, int len){
	char *j;
	for(int i=0;i<len-1;i++){
		for(j=s;j<s+len-i-1;j++){
			if(*j>*(j+1)){
				char t;
				t=*j;
				*j=*(j+1);
				*(j+1)=t;
				
			}
		}
	}
}
int str_len(char *s){
	
	
	int i=0;
      while(*(s+i)!='\0'){
		i++;
      }


      return i;


}
int main(){
    char *s[100];
    scanf("%s",s);
    int len = str_len(s);
    printf("排序前 : %s\n",s);
    sort(s,len);
    printf("排序后 : %s\n",s);
}