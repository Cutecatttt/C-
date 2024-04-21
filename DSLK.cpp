#include <bits/stdc++.h>

using namespace std;

struct NODE{
    int data;
    NODE *next = NULL;
};

//tao mot not moi
NODE* makeNode(int x){
    NODE* tmp = new NODE();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}

int Size(NODE *a){
    int cnt = 0;
    while(a != NULL){
        cnt ++;
        a = a -> next;
    }
    return cnt;
}

//them 1 phan tu vào dau DSLK
void insertFist(NODE *&a,int x){
    NODE *tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        tmp->next = a;
        a = tmp;
    }
}

//them 1 phan tu vao cuoi DSLK
void insertLast(NODE *&a, int x){
    NODE *tmp = makeNode(x);
    if(a==NULL){
        a = tmp;
    }
    else{
        NODE *p = a;
        while(p->next != NULL){
            p = p -> next;
        }
        p -> next = tmp;
    }
}

//them 1 phan tu vao giua DSLK
void insertMiddle(NODE *&a, int x, int pos){
    int n = Size(a);
    if(n == 1)  insertFist(a, x);
    else if(n = pos + 1)  insertLast(a,x);
    else{
        NODE *p = a;
        for(int i = 1; i < pos-1; i++){
            p = p->next;
        }
        NODE *tmp = makeNode(x);
        tmp -> next = p -> next;
        p -> next = tmp;
    }
}

int main() {
    
}
