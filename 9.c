/*************************************************************************
	> File Name: 9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月04日 星期三 19时37分49秒
 ************************************************************************/

#include<stdio.h>
int fact(int n){
    if(n==1) {
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}

int main(){
    int n,sum=1;
    scanf("%d",&n);
    printf("%d",fact(n));

    return 0;
}
