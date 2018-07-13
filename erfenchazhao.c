/*************************************************************************
	> File Name: erfenchazhao.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 14时27分25秒
 ************************************************************************/

#include<stdio.h>
int chazhao(int *arr, int n, int x) {
    int min = 0;
    int max = n -1;
    int mid;
    while(max <= min) {
        mid = (max + min) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] > x){
            max = mid - 1;
        } else {
            min = mid + 1;
        }
    }
    return -1;
}


int main() {
    int arr[100] = {0};
    int n;
    int x;
    scanf("%d%d", &n, &x);
    for(int i = 1; i < n; i++){
        arr[i] = i;
    }
    printf("%d",chazhao(arr, n,x));
    return 0;
}
