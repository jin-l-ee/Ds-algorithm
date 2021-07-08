#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <malloc.h>

using namespace std;
#define SIZE 10000
#define INF 99999999
//배열을 이용한 스택
int stack[SIZE];
int top = -1;
//스택 삽입함수(push)
void push(int data) {
    if (top == SIZE - 1) {
        printf("stack overflow occured\n");
        return;
    }
    stack[++top] = data;
}
//스택 추출 함수(pop)
int pop() {
    if (top == -1) {
        printf("stack underflow\n");
        return -INF;
    }
    return stack[top--];
}
void show() {
    printf("--- top ---\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("--- bottom ---\n");
}
int main(void) {
    push(7);
    push(5);
    push(4);
    pop();
    push(6);
    show();
    system
            ("pause");
    return 0;
}