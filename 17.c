/*************************************************************************
	> File Name: 17.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月09日 星期一 19时55分11秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main() {
    int man;
    int computer;
    while(1){
    printf("输入你的选择0代表剪刀1代表石头2代表布");

    scanf("%d",&man);
    computer=rand()%3;
    int ret=(man - computer + 4) % 3- 1;
    if (ret == 0){
        printf("平局\n");
    } else if (ret>0){
        printf("你赢了\n");
    } else {
        printf("你输了\n");
    }
    }
    return 0;
}
