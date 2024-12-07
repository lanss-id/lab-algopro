#include <stdio.h>
#include <stdbool.h>
#define SIZE 10


void pindah(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int data[], int size) {
    int temp;
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] > data[j + 1]) {
               pindah(&data[j], &data[j + 1]);
               swapped = true;
            }
        }
        printf("Bubble Sort - Pass %d: ", i + 1);
        printArray(data, size);

        if(swapped == 0)
        break;
    }
}

void selectionSor
















t(int data[], int size) {
    int minIndex, temp;
    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }

        temp = data[i];
        data[i] = data[minIndex];
        data[minIndex] = temp;

        printf("Selection Sort - Pass %d: ", i + 1);
        printArray(data, size);
    }
}

void insertionSort(int data[], int size) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;

        printf("Insertion Sort - Pass %d: ", i);
        printArray(data, size);
    }
}

int main() {
    int data[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};
    int size = SIZE;

	printf("Original Array: ");
    printArray(data, size);
	printf("\n");

    // Bubble Sort
    int bubbleArr[SIZE];
    for (int i = 0; i < SIZE; i++) bubbleArr[i] = data[i];
    bubbleSort(bubbleArr, size);
    printf("\n");

    // Selection Sort
    int selectionArr[SIZE];
    for (int i = 0; i < SIZE; i++) selectionArr[i] = data[i];
    selectionSort(selectionArr, size);
    printf("\n");

    // Insertion Sort
    int insertionArr[SIZE];
    for (int i = 0; i < SIZE; i++) insertionArr[i] = data[i];
    insertionSort(insertionArr, size);
    printf("\n");

    return 0;
}
