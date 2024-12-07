#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <math.h>
int max_min (int *max,int *min,int arr[],int n){
	*max=arr[0];
	*min=arr[0];
	for(int i=1;i<n;i++){
		if(*max<arr[i]){
			*max=arr[i];
		}
		if(*min>arr[i]){
			*min=arr[i];
		}
		
	}
}
int main()
{
    int max, min, ar[100], i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    max_min(&max, &min, ar, n);
    printf("%d %d\n", min, max);
    return 0;
}