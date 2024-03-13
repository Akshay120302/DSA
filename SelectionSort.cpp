#include <iostream>
using namespace std;

void selectionSort(int arr[], int size, bool ascending = true) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if ((arr[j] < arr[minIndex] && ascending) || (arr[j] > arr[minIndex] && !ascending)) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    cout << "Selection Sort (Ascending): ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, size, false);
    cout << "Selection Sort (Descending): ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}