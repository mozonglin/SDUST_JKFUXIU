#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char a[100];
    printf("Case Digits Lowers Uppers Others\n");
    for (int i = 1; i <=n; i++)
    {
        gets(a);
        int len=strlen(a);
        int sz=0,xx=0,dx=0,ot=0;
        for (int j = 0; j < len; j++)
        {
            
            if (a[j]>='A'&&a[j]<='Z')
            {
                dx++;
            }
            else if (a[j]>='a'&&a[j]<='z')
            {
                xx++;
            }else if (a[j]>='0'&&a[j]<='9')
            {
                sz++;
            }else
            {
                ot++;
            }
            
            
            
            
        }
        
        
        printf("%-5d%-7d%-7d%-7d%-d\n",i,sz,xx,dx,ot);
        
    }
    
    
}