#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        for (int j=0; j< a; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}