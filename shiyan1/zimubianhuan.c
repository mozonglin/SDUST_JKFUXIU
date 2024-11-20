#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char a;
    int b;
    scanf("%c %d",&a,&b);
    if (a+b>90)
    {
        char c=65+a+b-91;
        printf("%c\n",c);
    }else
    {
        char d=a+b;
        printf("%c\n",d);
    }
    
    
    
    
}
