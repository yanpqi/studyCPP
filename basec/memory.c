#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void main(){
    int* p = (int*)malloc(1024);
    int* q = (int*)calloc(1024,4);
    int* s = (int*)alloca(1024);
    if(!p){
        printf("out of memory\n");
	return ;
    }else{
        printf("size of p is %d",sizeof(p));
    }
    if(!q){
        printf("out of memory\n");
	return ;
    }else{
        printf("size of q is %d\n",sizeof(q));
    }
    p[1]=123;
    //int* ptr = &p[1];//p[1] is a value ref,not address ref ,so must get its address.
    int *ptr = p + 1;
    printf("ptr point to p[1]=%d\n",*ptr);
    int * r= (int*)realloc(p,512);//must reassigment for may return new address.
    if(!r){
     printf("realloc failed,p not freed ,use origin p.");
    }
    printf("p points to %p,rpoints to %p\n",p,r);
    if(r != p){//must not give the new address to p directly for may failer to miss address of origin p.
        p = NULL;//p has been freed ,to avoid wild pointer.
        p = r;
    }
    r = NULL;//use p,the memory size is recored in heap manager.
    printf("p has pointed to new address\n");
    printf("ptr value is %d\n",*ptr);
    free(p);
    free(q);
}
