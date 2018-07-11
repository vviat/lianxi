/*************************************************************************
	> File Name: 16.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月09日 星期一 19时34分04秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char day[7][10]={"monday","tuesday","wednesday",
                    "friday","saturday","sunday"};
    int n;
    scanf("%d",&n);
    if (n>7 || n<1) return -1;
    printf("%s",day[n-1]);
    return 0;
}
