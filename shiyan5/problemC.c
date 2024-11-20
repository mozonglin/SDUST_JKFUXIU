#include <stdio.h>
#include<limits.h>
#include <math.h>
#define MAX_LEN 1000
int str_len(char s[]){
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
}
void copystr(char s1[], char s2[], int n){
    int count=0;
    while (s1[n-1]!='\0')
    {
        s2[count]=s1[n-1];
        count++;
        n++;
    }
    
    

}
int main()
{
    int n;
    char str1[MAX_LEN], str2[MAX_LEN];
    scanf("%s", str1);
    scanf("%d", &n);
    if(str_len(str1)<n)
        printf("input error!\n");
    else
    {
        copystr(str1,str2,n);
        printf("%s\n",str2);
    }
    return 0;
}