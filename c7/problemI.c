#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#define MAX_SIZE 1000

int get_array(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

int min_index(int a[], int n){
    int min=a[0];
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            count=i;
        }
    }
    return count;
}
int main()
{
    int array[MAX_SIZE], size, index;
 
    scanf("%d", &size);
    get_array(array, size);
    index = min_index(array, size);
    printf("minimum number is %d, whose position is %d.", array[index], index);
 
    return 0;
}
