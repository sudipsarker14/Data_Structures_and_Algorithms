#include <stdio.h>

int MAXSIZE = 8;
int arr[8];
int top = -1;

int isempty() {

   if(top == -1){
     return 1;
   }

   else
      return 0;
}

int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return arr[top];
}

int pop() {
   int data;

   if(!isempty()) {
      data = arr[top];
      top = top - 1;
      return data;
   } else {
      printf("Stack Underflow\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;
      arr[top] = data;
   } else {
      printf("Stack Overflow\n");
   }
}

int main() {
   
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");

   return 0;
}
