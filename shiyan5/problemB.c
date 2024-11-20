#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>

void print(int n,char ch){
    for (int i = 0; i <(n-1)/2; i++)
    {
        for (int j = 0; j < (n-1)/2-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
        
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",ch);
    }
     printf("\n");
    for (int i = 0; i < (n-1)/2; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n-2-2*i; j++)
        {
            printf("%c",ch);
        }
         printf("\n");
    }
    
    
    
}


int main()
{
   int n;
   char ch;
   scanf("%d %c",&n,&ch);
   print(n,ch);
   return 0;
}

