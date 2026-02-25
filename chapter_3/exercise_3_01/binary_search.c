#include <stdio.h>

int binary_search(int *arr, int num, int n) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low < high) {
        mid = (low + high)/2;
        printf("**********\n");
        printf("low = %d, high = %d, mid = %d\n", low, high, mid);
        printf("**********\n");
        if (num <= arr[mid]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    if (arr[low] == num) {
        return low;
    }
    return -1;
}


int main(void) {
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int num = 12;

    int result = binary_search(arr, num, 20);

    if (result == -1) {
        printf("Element Not Found.\n");
    }
    else {
        printf("Element %d is in as the location: %d\n", num, result);
    }

    return 0;
}
