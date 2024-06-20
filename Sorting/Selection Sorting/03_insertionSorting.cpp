#include<iostream>
using namespace std; 

void insertionSort(int arr[], int n) {
    for(int i = 0; i <= n-1; i++) {

        int j = i; 
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j]; 
            arr[j] = arr[j-1]; 
            arr[j-1] = temp; 
            j--; 
        }
    }
}

int main() {
    int arr[7] = {24,9,14,2,32,78,5}; 
    insertionSort(arr, 7); 

    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " "; 
    }

    return 0; 
}