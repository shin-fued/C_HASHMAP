#include<stdio.h>
#include<stdlib.h>
#define MERSENNE 2147483647
#define HM char*[MERSENNE]
#define HM_YN int[MERSENNE]


void NEW_HM(){
    for(int i=0; i<MERSENNE; i++){
        HM_YN[i] = 0;
        HM = "\0";
    }
}

int pow(int b, int ex){
    for(int i=0; i < pow; i++){
        b*=b;
    }
    return ret;
}

int strlen(char* str){
    int cnt = 0;
    while(str[cnt] != NULL){cnt++;}
    return count;
}

int hash(char* key)void put(char* key, char* value){
    int len = strlen(key);
    int index = pow((int) key[len-2], (int) key[len-1]);
    for(int i = len-2; i > 0; i--){
        index *= pow((int) key[i], index) % MERSENNE;
    }
    return index;
}

void put(char* key, char* value){
    int i = hash(key);
    HM[i] = value;
    HM_YN[i] = 1;
}

void remove(char* key ){
    int i = hash(key);
    if(HM_YN[i]){
        HM_YN[i] = 0;
        HM[i] = "\0";
    }
    else{
        printf("No such key\n");
    }
}

char* get(char* key){
    int i = hash(key);
    return HM[i];
}

int main(){
    return 0;
}
