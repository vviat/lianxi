#include<stdio.h>
#include<stdio.h>
#define MAX_N 100000
#define MAX_K 20

int arr[MAX_N][MAX_K] = {0};

int find(int, int, int);
void init(int n) {
    for(int k = 1; k <= MAX_K; k++) {
        for(int i = 0; i < n &&i +(1 << k) <= n; i++) {
            arr[i][k] = find(i, i + (1 << k) - 1, k - 1);
        }
    }
    return ;
}

int find(int a, int b, int k) {
    int ind = a, num = arr[a][0];
    for(int i = k; i >= 0; i--) {
        if(ind == b) break;
        if(ind + (1 << i) - 1 > b) continue;
        do {
            num = num < arr[ind][i] ? num : arr[ind][i];
            ind += (1 << i);
        } while (ind + ( 1 << i) - 1 <= b);
    }
    return num;
}
int main(){
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    int x[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i][0]);
    }
    init(n);
    for(int i = 0; i < m; ++i) {
        scanf("%d %d", &a, &b);
        x[i] = find(a - 1, b - 1, MAX_K);
    }
    for(int i = 0; i < m; i++) {
        if(i != m) printf("%d ", x[i]);
	else printf("%d",x[i]);
    }
    return 0;
}
