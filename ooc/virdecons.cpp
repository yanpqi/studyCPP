#include <iostream>
using namespace std;
class obj {
public:
    obj(){};
    virtual ~obj()=0;
    virtual void print()=0;
};
obj::~obj(){}

void obj::print(){
    cout << "this is obj base."<<endl;
}
class ins :public obj {
public:
    ins(){};
    ~ins(){};
    void print(){cout <<"this is a dev of obj ins"<<endl;}
};

int main(){
    ins* i = new ins();
    obj* o = i;
    o->print();
    o->obj::print();
    delete o;
}
    
