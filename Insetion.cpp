#include<iostream>
using namespace std;

void insertionsort(int array[] , int size){
    for(int i=1; i<size; i++){
        int temp = array[i];
        int j = i -1;
        while(j>=0 && array[j] > temp){
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }
}

int main(){
    int array[] = {4,6,3,7,8,2,1,9,5};
    int size = sizeof(array)/sizeof(array[0]);

    insertionsort(array,size);

    for(int k=0; k< size ;k++){
        cout << array[k] << endl;
        
    }
    return 0;
}
