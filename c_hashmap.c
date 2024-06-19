#include<stdio.h>
#include<stdlib.h>
#define MERSENNE 524287

char* HM[MERSENNE];


int HM_YN[MERSENNE];

int pow(int b, int ex){
    for(int i=0; i < ex; i++){
        b*=b;
    }
    return b;
}

int strlen(char* str){
    int cnt = 0;
    while(str[cnt] != NULL){cnt++;}
    return cnt;
}

int hash(char* key){
    int len = strlen(key);
    int index = pow(key[len-2], key[len-1]);
    for(int i = len-2; i > 0; i--){
        index *= pow(key[i-1], key[i]) % MERSENNE;
    }
    return index;
}

void init(){
    for(int i = 0; i < MERSENNE; i++){
        HM_YN[i] = 0;
        HM[i] = "\0";
    }
}

void put(char* key, char* value){
    int i = hash(key);
    HM[i] = value;
    HM_YN[i] = 1;
}

char* get(char* key){
    return HM[hash(key)];
}

void take_out(char* key){
    int i = hash(key);
    if(HM_YN[i]){
        HM_YN[i] = 0;
        HM[i] = "\0";
    }
    else{
        printf("NO SUCH KEY\n");
    }
}

void clear(){
    for(int i=0; i<MERSENNE; i++){
        HM_YN[i] = 0;
        HM[i] = "\0";
    }
}

int main(){
    init();
    put("end", "hello");
    printf("%s\n", get("end"));
    return 0;
}
