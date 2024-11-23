#include <stdio.h>


double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0; 
    }
    return n * factorial(n - 1); 
}


double calculate_e(int n) {
    if (n == 0) {
        return 1.0; 
    }
    return (1.0 / factorial(n)) + calculate_e(n - 1); 
}

int main() {
    int n; 
    scanf("%d", &n);
    double e = calculate_e(n); 
    printf("%.10f\n", e);
    return 0;
}
