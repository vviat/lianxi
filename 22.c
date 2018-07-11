/*************************************************************************
	> File Name: 22.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 19时34分05秒
 ************************************************************************/

#include<stdio.h>
int main(){
    char a[100] = "   hello    world          haizei  ";
    char b[3][20]= {0};

   // while (sscanf(a,"%[a-z]",b)!=EOF) {
   sscanf(a, "%[a-z A-Z]%[^ ]",b[1]);
   sscanf(a, "%*s%s",b[2]);
   sscanf(a, "%*s%*s%s",b[3]);
    int read = printf("%s\n%s\n%s\n",b[1],b[2],b[3]);
    
   // }

    return 0;
}
