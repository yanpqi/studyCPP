void QSort(int *src,int start,int end){
    if(start<end){
        int firstpovit = quickSort(src,start,end);
        QSort(src,start,firstpovit-1);
        QSort(src,firstpovit+1,end);
    }
}
int quickSort(int* src,int start,int end){
    int povit = src[start];
    int idx = start;
    while(end > start){
        while(end>start && src[end]>=povit){end--;}
        if(start<end){
            src[start++]=src[end];
        }
        while(end>start && src[start]<=povit){start++;}
        if(start<end){
            src[end--]=src[start];
        }
    }
    src[start]=povit;
    return start;
}
