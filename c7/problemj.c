#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
#define MAX_SIZE 1000
int getarray(int a[]){
    int n;
    int i=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
	}
    return n;

}

int find(int a[], int n, int val){
    int count=-1;
    for(int i=0;i<n;i++){
        if(a[i]==val){
            count=i;
            break;
        }
    }
    return count;
}


int main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;
 
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}