#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char n;
    scanf("%c",&n);
    if (n>=65&&n<=90)
    {
        printf("Cap");
    }else if (n>=97&&n<=122)
    {
        printf("Low");
    }else if(n>=48&&n<=57)
    {
        /* code */
        printf("Digit");
    }else
    {
        printf("Other");
    }
    
    
    
    
}















