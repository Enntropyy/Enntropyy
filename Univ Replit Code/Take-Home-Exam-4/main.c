#include <stdio.h>
#include <stdlib.h>

int temp, *heap;
int size() {
  return heap[0];
}

void push(int data) {
  heap[++heap[0]] = data;

  int child = size();
  int parent = child / 2;
  while (child > 1 && heap[parent] < heap[child]) {
   SWAP(heap[parent], heap[child])
        child = parent;
        parent = child / 2;
    }

}

int pop() {
  int result = heap[1];
  heap[1] = heap[heap[0]--];
  heap[size() + 1] = 0;
  int parent = 1;
  int child = 2;
  while (child <= size()) { 
    if (child + 1 <= size()) {
      if (heap[child] < heap[child + 1]) {
        child++;
        } 
         else {
            child = child;
           }
    }
    if (heap[child] > heap[parent]) { 
            SWAP(heap[child], heap[parent])
            parent = child;
            child *= 2;
        }else{
            return result; 
        }
    }

    return result;
}

int main() {
    
    heap = (int *) malloc(sizeof(int) * HEAP_SIZE);
    for (int i = 0; i < HEAP_SIZE; ++i) heap[i] = 0;

    
    push(9);
    push(2);
    push(6);
    push(8);
    push(1);
    push(5);
    push(4);
    push(100);

    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());
    printf("pop! --> %d\n", pop());

    printf("current size: %d\n", size());

    return 0;
}
