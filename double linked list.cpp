#include <iostream>
#include <cstdio>
#include<stdlib.h>

using namespace std;


//count  전역변수를 쓸 수 없는 이유는 using namespace std 에 이미 정의되어져 있기 때문
typedef struct Node {
    int data;
    struct Node* pre;
    struct Node* next;
}Node;
Node* head, * tail;
/*
void insert(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node* cur;
    cur = head->next;//head의 next가 첫번째 원소
    while (cur->data < data && cur != tail) {
        cur = cur->next;
    }// 오름차순으로 정리해 주는 부분(1,2,4)에 3을 넣는 다 치면
    cur은 우선 head의 next '1'을 가짐.1이 3보다 작으니, cur은 다음 원소 2가되고 2는 3보다 또 작으니
    cur은 4가 됨. 4는 3보다 크니 다음 라인으로...
    //우리가 넣고자 하는 데이터보다, 보고 있는 포인터의 노드 데이터가 더 작을 때, 오른 쪽으로 이동
    Node* prev = cur->pre;// 삽입할 노드의 앞쪽 노드를 prev라고 잡아준다.아직 cur의 pre는 1,2,4 중 2이다
    그래서 prev는 2가된다.
    prev->next = node;  2의 다음에 3
    node->pre = prev; 3의 이전에 2
    cur->pre = node; 4의 이전에 3
    node->next = cur; 3의 다음에 4
}*/
void insert(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node* cur;
    cur = head->next;
    while (cur->data < data && cur != tail) {
        cur = cur->next;
    }


}






int main()
{
    Node* head, * tail;
    return 0;
}

