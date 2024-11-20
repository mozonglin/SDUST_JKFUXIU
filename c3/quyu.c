#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (b==0)
    {
        printf("Exception: / by zero");
    }
    else{
    printf("%d\n%d",a/b,a%b);}
    
}