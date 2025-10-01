#include <stdio.h>
void rotateRight(int arr[], int n, int k) {
    k = k % n;  // handle if k > n
    if(k == 0) return;
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    rotateRight(arr, n, k);
    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
