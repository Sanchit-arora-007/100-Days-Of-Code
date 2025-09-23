#include <stdio.h>
int main() {
    int arr[100], n, index;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Invalid index!\n");
    } else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}