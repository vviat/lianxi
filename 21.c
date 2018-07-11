/*************************************************************************
	> File Name: 21.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月11日 星期三 18时52分08秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int strncmp(char * arr1, char * arr2, int n) {
    for (int i = 0; i < n; ++i) {
        if(arr1[i] != arr2[i]){
            return (arr1[i] - arr2[i]);       
        }
    }
    return 0;
}
int main() {
    char a[] = "hello";
    char b[] = "world";
    int ans = strncmp(char a[], char b[], 6 );
    printf("%d\n",ans);
   printf("%d %d\n",sizeof(long,longlong));
    return 0;
}
