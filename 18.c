/*************************************************************************
	> File Name: 18.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月09日 星期一 20时31分10秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int a[20];
    int *p = &a[0];
    printf("%d",sizeof(p));
    printf("%d",sizeof(a));

    return 0;
}