#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

//Node 라는 이름의 포인터 변수(다 동적할당이기 때문) :노드 포인터
//구조체 포인터 멤버에 접근할 때는 화살표 연산자를 사용하여, 멤버에 접근한다.
typedef struct Node {
    int data;
    struct Node* next;//노드 구조체의 주소를 저장
}Node;



 

int main()
{
    Node *head = (Node*)malloc(sizeof(Node)); // 노드의 헤더 생성
    head->next = NULL;// 첫 노드가 가리키는 곳은 NULL이다.
    Node* node1 = (Node*)malloc(sizeof(Node));
    node1->next = head->next;//node1이 가리키는 곳에 head가 가리키던 곳을 저장
    node1->data = 10;
    head->next = node1;
    Node* node2 = (Node*)malloc(sizeof(Node));
    node2->next = node1->next;
    node2->data = 20;
    node1->next = node2;

    Node* cur = head->next;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
    
    
}

