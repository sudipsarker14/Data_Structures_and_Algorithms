#include <stdio.h>
#define V 4

void init(int arr[][V]) {
  int i, j;
  for (i = 0; i < V; i++)
    for (j = 0; j < V; j++)
      arr[i][j] = 0;
}


void addEdge(int arr[][V], int i, int j, int weight) {
  arr[i][j] = weight;
  arr[j][i] = weight;
}

void printAdjMatrix(int arr[][V]) {
  int i, j;

  for (i = 0; i < V; i++) {
    printf("%d: ", i);
    for (j = 0; j < V; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int adjMatrix[V][V];

  init(adjMatrix);
  addEdge(adjMatrix, 0, 1, 32);
  addEdge(adjMatrix, 0, 2, 45);
  addEdge(adjMatrix, 1, 2, 78);
  addEdge(adjMatrix, 2, 0, 54);
  addEdge(adjMatrix, 2, 3, 54);

  printAdjMatrix(adjMatrix);

  return 0;
}
