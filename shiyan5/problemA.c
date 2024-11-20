#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>


int digits(int n){
    int count=0;
    if(n==0){
        return 1;
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
        return count;
}
}





int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
    return 0;
}
