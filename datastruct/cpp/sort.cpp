#include <iostream>

class Sort{
public:
    Sort(s):size(s){
        data = new int[s];
    }
    void put();
    void get();
    void InsertSort();
    void selectSort();
    void heapSort();
    void bubbleSort();
    void quickSort();
    void mergeSort();
    void radixSort();
private:
   int* data;
   int* size;
};
void Sort::put(){
    cout << "please insert your data."<<endl;
    for(var i=0;i<size;i++){
        cin << data[i];
    }
}
void get(){
    for(var i=0;i<data.length;i++){
        cout << data[i] <<" ";
    }
    cout << endl;
}
void Sort::InsertSort(){
    for(int i=1;i<size;i++){
        int temp = data[i];
        for(int j=i-1;j>0;j--){
            if(data[j]>temp){
                data[j+1]=data[j];
            }else{
                data[j] = temp;
                break;
            }
        }
    }
}
void Sort::selectSort(){
    for(int j=0;j<size;j++){
        int min = j;
        for(int i=1;i<size;i++){
            if(data[i] < data[min]){
                min = i;
        }
        int temp = data[j];
        data[j]=data[min];
        data[min]=temp;
    }
}
void Sort::heapSort(){
}
void Sort::bubbleSort(){
    for(int i=size;i>0;i--){
        for(int j=size;j>i+1;j--){
            if(data[j]<data[j-1]){
                int temp = data[j];
                data[j]=data[j-1];
                data[j-1]=temp;
            }
        }
    }
}
int Sort::_quckSort(int start,int end){
    int quove = start;
    int temp = data[start];
    while(start < end){
        if(temp>data[end]){
            data[start++] = data[end];
        }
        if(temp<data[start]{
            data[end--] = data[start];
        }
    }
    data[start] = temp;
    return start;
}
void Sort::quickSort(int low,int high){
    if(low<high){
        int privot = _quickSort(low,high);
        _quickSort(low,privot-1);
        _quickSort(privot+1,high);
    }
}
void Sort::_Merge(int* rf,int low,int mid,int high){
    for(int j=mid+1,k=low;k<mid && j<=high;++k){
        if(data[j]<data[low]) rf[k]=data[j++];
        else rf[k] = data[low++];
    }
    while(low<mid){rf[k++]=data[low++];}
    while(j<high){rf[k++]=data[j++];}
}
void Sort::MSort(int *rf,int low,int high){
    if(low == high) data[low]=rf[low];
    else{
        int mid = (low +high)/2;
        MSort(rf,low,mid);
        MSort(rf,mid+1,high);
        _Merge(rf,low,high);
    }
void Sort::MergeSort(){
    int* rf = new int[size];
    MSort(rf,0,size-1);
}
void Sort::heapAdjust(int start,int len){
    int child = start*2+1;
    while(child <len){
        if(child<len && data[child]<data[child+1]){
            child++;
        }
        if(data[start]<data[child]){
            int temp = data[start];
            data[start]=data[child];
            data[child]=temp;
            start = child;
            child = 2*start+1;
        }else{
            break;
        }
    }
}
void Sort::buildHeap(){
    int start = floor(size/2-1);
    while(start>0){
        heapAdjust(start,size);
    }
}
void Sort::heapSort(){
    buildHeap();
    for(int i=size-1;i>0;i--){
        int temp = data[size];
        data[size] = data[0];
        data[0] = temp;
        heapAdjust(0,i);
    }
}
