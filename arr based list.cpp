#include <iostream>
#include <cstdio>

int arr[10000];
int count = 0;

void addBack(int data){
    arr[count] = data;
    count ++;
}

void addFirst(int data){
    for(int i = count; i>=1;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = data;
    count ++;
}
void show(){
    for(int i = 0; i<count;i++){
        printf("%d",arr[i]);
    }
}
void removeAt(int index){
    for(int i = index; i<count -1; i++){
        arr[i] = arr[i+1];
    }
    count ++;
}

int main() {
    addFirst(5);
    addFirst(8);
    addFirst(7);
    addBack(3);
    addBack(4);
    show();
    printf("\n");
    removeAt(2);
    show();

    return 0;
}
