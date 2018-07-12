/*************************************************************************
	> File Name: argc.1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月14日 星期一 14时21分51秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#include<string.h>
int main(int argc, char *argv[], char **env){
    char a[100] = "_=./haizeix";
    char b[100] = "LOGNAME=ygy";
    for(int i =0; i < argc; i++){
        printf("%s\n",argv[i]);
    }

    int ans = 0;
    int num = 0;
    for(int i = 0; ; i++){
       // if(strcmp(env[i], a) == 0) ans++;
       // if(strcmp(env[i], b) == 0) num++;
        if(env[i] == NULL) {    
           // printf("%d\n", i);
            break;
        } 
        printf("%s\n",env[i]);
    } 
    return 0;
}
