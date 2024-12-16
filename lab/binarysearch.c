#include <stdio.h>

int bubblesort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int target, int length) {
    int i;
    for (i = 0; i < length; i++){
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int target, int length) {
    int left = 0;
    int right = length - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else if(arr[mid] > target) {
            right = mid - 1;
        }
    }
}

int interpolationSearch(int arr[], int target, int length) {
    int left = 0;
    int right = length - 1;
    while(left <= right) {
        int mid = left + ((target - arr[left]) * (right - left) / (arr[right] - arr[left]));
        if (arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else if(arr[mid] > target) {
            right = mid - 1;
        }
    }
}

int main() {
    int arr[] = {12, 79, 15, 43, 34, 66, 93};
    int length = sizeof(arr) / sizeof(int);
    bubblesort(arr, length);
    int target = 66;
    int find = interpolationSearch(arr, target, length);
    printf("%d ada di index ke-%d\n", target, find);
}
