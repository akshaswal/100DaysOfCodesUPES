#include <stdio.h>
#include <limits.h>  
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;  
            largest = arr[i];         
        } else if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];   
        }
    }
    if(secondLargest == INT_MIN) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}
