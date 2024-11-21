#include <stdio.h>

#define MAX_SIZE 100 // 定义最大数组大小

int get_array(int a[]){
    int n;
    int i=0;
    while(scanf("%d",&n)!=EOF){
        a[i]=n;
        i++;
    }
    return i;

}
int sort_array(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=0;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

return 0;
}
int put_array(int a[],int n){
    printf("%d",a[0]);
    for(int i=1;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
}

int main() {
    int array[MAX_SIZE], size;
  
    size = get_array(array); // 读取数组
    sort_array(array, size); // 对数组进行排序
    put_array(array, size); // 输出排序后的数组
  
    return 0;
}

