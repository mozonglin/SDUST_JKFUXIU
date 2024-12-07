#include <stdio.h>
void str_cpy(char *s1, char *s){
	int i;
	for(i=0;*(s1+i)!='\0';i++){
		*(s1+i)=*(s+i);
	}
	*(s1+i)='\0';
}
int str_len(char *s){
	
	
	int i=0;
      while(*(s+i)!='\0'){
		i++;
      }


      return i;


}
int main() {
    char s[100];
    scanf("%s", s);
    int len = str_len(s);
    printf("%d\n", len);
    char s1[100];
    str_cpy(s1, s);
    printf("%s\n", s1);
    return 0;
}
