/*************************************************************************
	> File Name: shift_and.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 14时43分03秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int shift_and1(const char *text, const char *pattern){
    int len = strlen(pattern);
    int d[127][len];
    memset(d,0,sizeof(d));
    for(int n = 0 ; pattern[n]; n++){
        d[pattern[n]][n] = 1;
    } 
    int p[len];
    memset(p, 0, sizeof(p));
    for(int i = 0; text[i]; i++){
        for(int j = len - 1; j >= 0; j--){
            p[j + 1] = p[j]; 
        }
        p[0] = 1;
        for (int j = 0; j < len; j++) {
            if (p[j] == 1 && d[text[i]][j] == 1) {
                p[j] = 1;
            } else p[j] = 0;
        }
        if(p[len - 1] == 1) return 1;
    }
    
    return 0;
}

int main(){
    #define MAX1 100
    srand(time(0));
    char str1[MAX1 + 1];
    int len1 = MAX1;
    for (int i = 0; i < len1; i++) str1[i] = 'a' + rand() % 26;
    printf("%d\n",shift_and1("aecaeaecaed","aecaed"));
    printf("%d\n",shift_and1(str1,"wda"));
    return 0;
}
