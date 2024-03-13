#include<iostream>
using namespace std;

void merge(int leftArray[], int rightArray[], int array[], int leftSize, int rightSize) {
    int i = 0, l = 0, r = 0;

    while (l < leftSize && r < rightSize) {
        if (leftArray[l] < rightArray[r]) {
            array[i] = leftArray[l];
            l++;
        }
        else {
            array[i] = rightArray[r];
            r++;
        }
        i++;
    }

    while (l < leftSize) {
        array[i] = leftArray[l];
        l++;
        i++;
    }

    while (r < rightSize) {
        array[i] = rightArray[r];
        r++;
        i++;
    }
}

void mergeSort(int array[], int length) {
    if (length <= 1) return;

    int mid = length / 2;
    int leftArray[mid];
    int rightArray[length - mid];

    for (int i = 0; i < mid; i++) {
        leftArray[i] = array[i];
    }

    for (int i = mid; i < length; i++) {
        rightArray[i - mid] = array[i];
    }

    mergeSort(leftArray, mid);
    mergeSort(rightArray, length - mid);
    merge(leftArray, rightArray, array, mid, length - mid);
}

int main() {
    int array[] = {4, 6, 3, 7, 8, 2, 1, 9, 5};
    int size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, size);

    for (int k = 0; k < size; k++) {
        cout << array[k] << endl;
    }
    return 0;
}