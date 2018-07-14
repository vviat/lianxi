/*************************************************************************
	> File Name: pjpasswd.c
	> Author: 
	> Mail: 
	> Created Time: 2018年05月27日 星期日 11时32分40秒
 ************************************************************************/

    #include<stdio.h>  
    #include<string.h>  
    #include<stdlib.h>  
    #include<unistd.h>  
    #include<crypt.h>  
    #include<time.h>  
    const char* cha="abcdefghijklmnopqrstuvwxyz0123456789";//假设密码只是用小写字母和数字  
    const char* salt="$6$l60.LDjZ$";//加密使用的秘钥  
    const int ChaLen=36;  
    const int MinLen=1;  
    const int MaxLen=8;  
    const char* encoded_key="$6$l60.LDjZ$iULkBn1PndbI.a9Rl8b1B650bcTfXhwXmdVfE6KHQ9qgLhY9iG6YhRVMMSrX6kmrXY7E4Q/oFUTcS2lKX8gwq/";//对c91进行加密的密文  
    char crack_key[20]="";  
    bool permutation(char* subcha,const int sublen,int pos){  
        if(pos==sublen){  
            return strcmp(encoded_key,crypt(subcha,salt))==0;  
        }  
        for(int i=pos;i<sublen;++i){  
            bool change=true;  
            for(int j=i-1;j>pos;--j)  
                if(subcha[i]==subcha[j]){  
                    change=false;  
                    break;  
                }  
            if(change){  
                char t=subcha[pos];  
                subcha[pos]=subcha[i];  
                subcha[i]=t;  
                if(permutation(subcha,sublen,pos+1))return true;  
                t=subcha[pos];  
                            subcha[pos]=subcha[i];  
                            subcha[i]=t;  
            }  
        }  
        return false;  
    }  
      
    bool generateNcha(const int N,int pos,int left,char* subcha){  
        if(left==0){  
            printf("Now Searching %s...\n",subcha);  
            if(permutation(subcha,N,0)==true)  
                return true;  
            return false;  
        }  
        if(pos>=ChaLen||left>ChaLen-pos)return false;  
        subcha[N-left]=cha[pos];  
        if(generateNcha(N,pos+1,left-1,subcha))return true;  
        return generateNcha(N,pos+1,left,subcha);  
    }  
      
    int main(){  
        printf("%s\n",crypt("c91",salt));//用c91进行加密得到的密文与上面的一致  
      
        clock_t start=clock();  
        for(int i=MinLen;i<=MaxLen;++i){  
            crack_key[i]='\0';  
            if(generateNcha(i,0,i,crack_key)){  
                printf("Key is found:%s\n",crack_key);  
                break;  
            }  
            printf("=====%d is searched=====\n",i);  
        }  
        clock_t end=clock();  
        printf("Time:%d\n",(int)(end-start)/1000);  
      
        return 0;  
    }  
