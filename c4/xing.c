#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >i ; j--)
        {
            printf(" ");
            
        }
        for(int k=1;k<=2*i-1;k++){
            printf("+");
        }
        printf("\n");
        
    }
    
}