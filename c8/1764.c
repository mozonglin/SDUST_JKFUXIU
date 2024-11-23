#include <stdio.h>
int arg(int k);
int main(){
    int k;
    scanf("%d",&k);
    printf("%d\n",arg(k));
}
int arg(int k){
    int x;
    if(k==0){
        return 0;
    }else{
        scanf("%d",&x);
        return x+arg(k-1);
    }
}