#include <iostream.h>
using namespace std;

template<class T>
class ListNode {
    T m_data;
    ListNode *m_next;
public:
    ListNode(data){
        m_next = NULL;
        m_data = data;
    }
    T get(){return m_data;}
    void set(T data){m_data = data}
    ListNode* next(){return m_next;}
    void next(ListNode *next){m_next = next;}
};

class sLinkList {
    ListNode *m_head;
    int m_size;
public:
    sLinkList():m_head(null),m_size(0){}
    void addNode(ListNode *node);
    ListNode* delNode(T data);
};

void sLinkList::addNode(ListNode *node,boolean (*cb)()){
    ListNode *p = m_head;
    while(p != null && p->next != null){
        if(cb && cb(p->data,node->data)){
            node->next = p->next;
            p->next = node;
            break;
        }
        p = p->next;
    }
    if(cb == null){
        p->next = node;
    }
}

ListNode* sLinkList::delNode(ListNode *node){
    ListNode *p = m_head;
    while(p != null && p->next != null){
        if(p->next == node){
            p->next = p->next->next;
            break;
        }
        p = p->next;
    }
}
bool sLinkList::isEmpty(){
    return m_head == null;
}
bool sLinkList::traveler(){
    ListNode *p = m_head;
    while(p != null && p->next != null){
        cout << p->data<<endl;
        p = p->next;
    }
}
ListNode* sLinkList::findNode(T data){
    ListNode *p = m_head;
    while(p != null && p->next != null){
        if(p->next == node){
            return p;
        }
        p = p->next;
    }
}
