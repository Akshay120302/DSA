#include <iostream>

using namespace std;

void insertionSort(int arr[], int size, bool ascending = true) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && ((key < arr[j] && ascending) || (key > arr[j] && !ascending))) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    cout << "Insertion Sort (Ascending): ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, size, false);
    cout << "Insertion Sort (Descending): ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}