/*************************************************************************
	> File Name: argv.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月13日 星期日 17时32分08秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[], char **env){
    char a[100] = "_=./haizeix";
    char b[100] = "USER=ygy";
    char c[100] = "-p";
    char d[100] = "123456";

    int ans = 0;
    int num = 0;
    int temp = 0;
    for(int i = 0; ; i++){
        if (env[i] == NULL) break; 
        if (strcmp(env[i], a) == 0) ans = 1;
        if (strcmp(env[i], b) == 0) num = 1;
    }     
    
    if(strcmp(argv[1],c) == 0) printf ("-p正确\n");
    else printf("-p不正确\n");
    if(strcmp(argv[2],d) == 0) printf ("密码正确\n");
    else printf("密码不正确\n");
    
    //printf("%s\n", argv[0]);
    //printf("%s\n", argv[1]);
    
    for(int i = 0; ; i++){
        if (env[i] == NULL) break; 
        if (strcmp(env[i], argv[3]) == 0) {
            temp = 1;
            break;
        }
    }
    if(temp==1) printf("用户名正确\n");
    else{ printf("用户名不正确\n");
    }
    if(ans == 1 && num == 1) {
        printf("运行文件名为ｈａｉｚｅｉｘ，用户名为ｙｇｙ\n");
    }
    if(ans == 1 && num == 0) {
        printf("用户名不符合要求运行文件名为ｈａｉｚｅｉｘ\n");       
    }
    if(ans == 0 && num == 1) {
        printf("运行文件名不符合要求，用户名为ｙｇｙ\n");
    }
    
    return 0;
}
