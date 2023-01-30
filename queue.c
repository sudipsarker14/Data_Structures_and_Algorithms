#include <stdio.h>
#define n 5

int arr[n], front = -1, rear = -1;

void enQueue(int data) {
  if (rear == n - 1){
    printf("Queue is Full\n");
  } else {
    if (front == -1)
      front = 0;
    rear++;
    arr[rear] = data;
    printf("Inserted: %d", data);
  }
}

void deQueue() {
  if (front == -1){
    printf("Queue is Empty\n");
  } else {
    printf("Deleted: %d", arr[front]);
    front++;
    if (front > rear){
      front = rear = -1;
    } 
  }
}

void display() {
  if (rear == -1){
    printf("Queue is Empty!!!");
  } else {
    printf("Queue elements are:\n");
    for (int i = front; i <= rear; i++)
      printf("%d  ", arr[i]);
  }
  printf("\n");
}

int main() {

  enQueue(1);
  enQueue(3);
  display();
  deQueue();
  deQueue();
  display();

  return 0;
}
