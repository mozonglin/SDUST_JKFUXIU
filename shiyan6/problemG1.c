#include <stdio.h>

int main() {
    char input[12];  // 存储输入的字符串（最多可以容纳 10 位数和一个空字符）
    
    while (scanf("%s", input) != EOF) {
        int num = 0;
        int i = 0;
        
        // 跳过前导零
        while (input[i] == '0') {
            i++;
        }
        
        // 如果没有有效数字，则输出 1（表示零的位数）
        if (input[i] == '\0') {
            printf("1\n");
            continue;
        }

        // 从剩余有效数字计算位数
        while (input[i] != '\0') {
            num = num * 10 + (input[i] - '0');
            i++;
        }
        
        // 辗转相除的方法计算位数
        int count = 0;
        if (num == 0) {
            count = 1;
        } else {
            while (num > 0) {
                num /= 10;
                count++;
            }
        }

        // 输出位数
        printf("%d\n", count);
    }

    return 0;
}
