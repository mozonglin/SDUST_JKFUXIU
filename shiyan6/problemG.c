#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    while(gets(a)!=NULL){
    	int count=0;
    int p=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='1'&&a[i]<='9'){
            p=1;
        }
        if(a[i]!='0'){
            count++;
        }else if (a[i]=='0'&&p==1)
        {
            count++;
        }
        
    }
    printf("%d\n",count);
	}
    
}