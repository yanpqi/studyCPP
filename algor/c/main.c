#include <stdio.h>

void printArray(int* src,int len){
    int i=0;
    for(i=0;i<len;i++){
        printf(" %d ",src[i]);
    }
    printf("\n");
}
int main(){
    int array[] = {50,10,30,40,80,60,20,10,50,90};
    printArray(array,10);
    QSort(array,0,9);
    printArray(array,10);
}
