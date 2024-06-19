#include<stdio.h>
#include<stdlib.h>

typedef struct LIST{
    int* list;
    int size;
    int head;
} List;

List init_empty(){
    List li;
    li.size = 0;
    int in[512];
    li.list = in;
    li.head = 0;
    return li;
}

List init_array(int* arr){
    List li;
    int cnt = 0;
    while(*arr != '\0'){
        cnt++;
        arr++;
    }
    int in[512];
    li.size = cnt;
    li.list = in;
    li.head = cnt;
    for (int i=0; i<cnt; i++){
        li.list[i] = arr[i];
    }
    return li;
}
