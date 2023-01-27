#include <stdio.h>
#define n 5

int arr[n], front = -1, rear = -1;

void enQueue(int val) {
  if (rear == n - 1)
    printf("Queue is Full\n");
  else {
    if (front == -1)
      front = 0;
    rear++;
    arr[rear] = val;
    printf("\nInserted: %d", val);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty\n");
  else {
    printf("\nDeleted: %d", arr[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
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
