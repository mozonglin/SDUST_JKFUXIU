#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    char a[101];
    char b;
    gets(a);
    scanf("%c",&b);
    int len=strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i]==b)
        {
            printf("%d\n",i);
        }
        
    }
    
}