/*************************************************************************
	> File Name: 11.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月04日 星期三 20时13分41秒
 ************************************************************************/

#include<stdio.h>
int factorial(int n ,int p) {
    if(n == 1){
        return p;
    } else {
        return factorial(n - 1, p*n);
    }
}

int main(){
    int n, p;
    scanf("%d", &n);
    printf("%d",factorial(n,1));
    return 0;
}
