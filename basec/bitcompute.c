
int Add(int sum,int base){
    int a = sum;
    int b = base;
    while(b){
        int temp = a;
        sum = temp ^ b;
        b = (temp & b)<<1;
    }
    return sum;        
}
