#include <stdio.h>

int str_num(char s[]) {
    int result = 0;
    int i = 0;

    while (s[i] != '\0') {
        
        result = result * 10 + (s[i] - '0');
        i++;
    }
    
    return result;
}

int main()
{
    char s[20];
    scanf("%s", s);
    printf("%d\n", str_num(s));
}
