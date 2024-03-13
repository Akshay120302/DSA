#include<iostream>
using namespace std;

int partition(int array[] , int start , int end){

    int pivot = array[end];

    int i = start - 1;

    // int size = sizeof(array) / sizeof(array[0]);

    for(int j = start ; j< end; j++){
        if(array[j] < pivot){
            i++;
            swap(array[i] , array[j]);
        }
    }
        i++;
        swap(array[i] , array[end]);

    return i;
}

void quickSort(int array[] , int start , int end){
    if(end <= start) return;

    // int size = sizeof(array) / sizeof(array[0]);
    int pivot = partition(array , 0 , end);

    quickSort( array , 0 , pivot -1);
    quickSort(array, pivot + 1 , end);
}

int main() {
    int array[] = {4, 6, 3, 7, 8, 2, 1, 9, 5};
    int size = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, size-1);

    for (int k = 0; k < size; k++) {
        cout << array[k] << endl;
    }
    return 0;
}