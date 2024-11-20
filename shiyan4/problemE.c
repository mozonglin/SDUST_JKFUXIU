#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char a[1001],b[1001],c[1001];
    while(gets(a)!=NULL){
        int len= strlen(a);
        int j=0;
        for(int i=0;i<len;i++){
            if(a[i]>='A'&&a[i]<='Z'){
                a[i]=a[i]+32;
            }
            if(a[i]>='a'&&a[i]<='z'||(a[i]>='0'&&a[i]<='9')){
                b[j]=a[i];
                j++;
            }
        }
        b[j]='\0';
        int p,k;
        for(p=0,k=j-1;k>=0;k--,p++){
            c[p]=b[k];
        }
        c[p]='\0';
        if(strcmp(b,c)==0){
            printf("Yes.\n");
        }else{
            printf("No.\n");
        }
        
}
}