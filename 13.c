/*************************************************************************
	> File Name: 13.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月09日 星期一 18时19分01秒
 ************************************************************************/

#include<stdio.h>
int prime[100] = {0};
int main(){
    
    for (int i = 2; i * i <= 100; i++) {
        if(prime[i]) continue;
        for(int j = i*i;i<=100; j+=i){
            prime[j] = 1;
        }
    }
    for(int i = 2;i <100; i++){
        if(prime[i]=1){
            printf("%d",prime[i]);
        }
    }
}
