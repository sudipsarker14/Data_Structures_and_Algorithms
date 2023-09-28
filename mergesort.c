#include <stdio.h>

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void marge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

     void margesort(int A[], int low, int high){
         int mid;
         if(low<high){
         mid = (low+high)/2;
         margesort(A, low, mid);
         margesort(A, mid+1, high);
         marge(A, mid, low, high);
         }
     }

int main()
{
    int A[] = {23,6,9,1,6,3,43};
    int n = 7;
    printArray(A, n);
    margesort(A, 0, 6);
    printArray(A, n);
    return 0;
}
