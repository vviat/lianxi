/*************************************************************************
	> File Name: printf.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月30日 星期三 20时20分51秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<inttypes.h>
#include<math.h>

void __pass(va_list *args) {return 0;}
void __decimal(va_list *args){
    int number = va_arg(*args, int);
    uint32_t temp_number = number;
    int ret = 0, k = 0, flag = (number < 0);
    if(flag) temp_number = -number;
    #define PUT(ch) putc(ch, stdout), ret++;
    if (temp_number == 0) {
        PUT('0');
        return 1;
    }
    if (flag) PUT('-');
    k = (uint32_t)log10(temp_number);
    do {
        PUT(temp_number / (uint32_t)pow(10, k) + '0');
        temp_number %= (uint32_t)pow(10, k);
    } while(k--);
    #undef PUT
    return ret;
}

int print(const char *frm, ...) {
    int ret = 0;
    int (*hash_func[128])(va_list *);
    for (int i =0; i < 128; i++) {
        hash_func[i] = __pass;
    }
    hash_func['d'] = __decimal;
    #define PUT(ch) putc(ch,stdout),ret++;
    va_list args;
    va_start(args, frm);
    while (frm[0]) {
        switch (frm[0]) {
            case '%':{
                frm++;
                ret += hash_func[frm[0]](&args);
            } break;
            default :
                PUT(frm[0]);
                break;
        }
        frm++;
    }
    #undef PUT
    return ret;
}
int main() {
        print("hello world\n");
        print("number : %d %d\n", 123, 456);
        print("number : %d %d\n", 120, 456);
        print("number : %d %d\n", 0, 456);
        print("number : %d %d\n", -123, 456);
        print("number : %d %d\n", INT32_MAX, INT32_MIN);
        return 0;

}

