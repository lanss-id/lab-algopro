#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

void bubbleSort(int data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(&data[j], &data[j + 1]);
                swapped = true;
            }
        }

        printf("Bubble Sort - Putaran %d: ", i + 1);
        printArray(data, size);

        if (!swapped) {
            break;
        }
    }
}

void selectionSort(int data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(&data[i], &data[minIndex]);
        }

        printf("Selection Sort - Putaran %d: ", i + 1);
        printArray(data, size);
    }
}

void insertionSort(int data[], int size) {
    for (int i = 1; i < size; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;

        printf("Insertion Sort - Putaran %d: ", i);
        printArray(data, size);
    }
}

int main() {
    int data[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};
    int size = SIZE;

    printf("Data Awal: ");
    printArray(data, size);
    printf("\n");

    int bubbleArr[SIZE], selectionArr[SIZE], insertionArr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        bubbleArr[i] = selectionArr[i] = insertionArr[i] = data[i];
    }

    printf("Bubble Sort:\n");
    bubbleSort(bubbleArr, size);

    printf("\nSelection Sort:\n");
    selectionSort(selectionArr, size);

    printf("\nInsertion Sort:\n");
    insertionSort(insertionArr, size);

    return 0;
}
