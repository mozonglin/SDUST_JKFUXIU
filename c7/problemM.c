#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#define MAX_SIZE 100
int get_matrix(int mtx[][100], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mtx[i][j]);
		}
	}
}

int count_average(double arr[], int mtx[][100], int m, int n){
	
	double p;
	for(int j=0;j<n;j++){
		p=0;
		for(int i=0;i<m;i++){
			
			p+=mtx[i][j];
		}
		arr[j]=p/m;
	}
}
int put_array(double arr[], int n){
	
	printf("%lg",arr[0]);
	for(int i=1;i<n;i++){
		printf(" %lg",arr[i]);
	}
	putchar('\n');

}

int main()
{
    int i, cases;
    double average[MAX_SIZE];
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%d%d", &m, &n);
        get_matrix(matrix, m, n);
        count_average(average, matrix, m, n);
        printf("case %d:", i);
        put_array(average, n);
    }
    return 0;
}