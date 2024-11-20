#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    while (scanf("%d",&a)!=EOF)
    {
        int b=a/10;
        if(a>=0&&a<=100){
		
        switch (b)
        {
        case 10:
            printf("Excellent\n");
            break;
        case 9:
            printf("Excellent\n");
            break;
        case 8:
            printf("Good\n");
            break;
        case 7:
            printf("Average\n");
            break;
        case 6:
            printf("Pass\n");
            break;
        default:printf("Failing\n");
            break;
        }
    }
    else{
    	printf("Error\n");
	}
    }
    
    
}