#include<stdio.h>

int main(){
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    //INSERTION
    int pos1 = 3;
    int val = 10;
    for (int i = n; i > pos1; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos1] = val;
    n++;
    printf("\nNew array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //DELETION
    int pos2 = 2;
    for (int i = pos2; i < n; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("\nNew array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //TRAVERSING
    printf("\nElements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}