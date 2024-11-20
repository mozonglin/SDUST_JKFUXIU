#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    if (a*a*a+b*b*b+c*c*c==n&&100<=n&&n<=999)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
