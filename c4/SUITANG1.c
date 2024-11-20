#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double s=0;
    for(double i=1;i<=n;i++){
        s=s+1.0/i;
    }
    printf("%lf",s);
}