#include <stdio.h>
#include<limits.h>
#include <math.h>
#define MAX_LEN 1000
void input(int a[],int n){
    int i=0;
    while(i<n){
        scanf("%d",&a[i]);
    i++;
    }
}
double compare(int a[], int b[], int n){
    int i=0;
    double count=0.0;
    while(i<n){
        if(a[i]==b[i]){
            count++;
        }
        i++;

    }
    double c=n*1.0;
    double d=count/n;

    return d;
}
int main()
{
    int n, a[MAX_LEN], b[MAX_LEN];
    double sim;
    scanf("%d",&n);
    input(a,n);
    input(b,n);
    sim=compare(a,b,n);
    printf("%.4lf\n",sim);
    return 0;
}
