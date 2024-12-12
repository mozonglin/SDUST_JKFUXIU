#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    if (sqrt(a)==(int)sqrt(a)&&a>0&&a%2==0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}