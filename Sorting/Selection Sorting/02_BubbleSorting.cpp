#include<iostream>
using namespace std; 

void bubbleSorting(int arr[], int n) {
    
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0; 
        for(int j = 0; j <= i - 1; j++ ) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
                didSwap = 1; 
            }
        }
        
        if(didSwap == 0) {
            break; 
        }

    }
}

int main() {
    int arr[7] = {24,9,14,2,32,78,5}; 
    bubbleSorting(arr, 7); 

    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " "; 
    }

    return 0; 
}