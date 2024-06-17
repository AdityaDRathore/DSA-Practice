// --------------------------------------------------Selection Sorting---------------------------------------------------------------

#include<iostream>
using namespace std; 

void sorting(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        int min = i; 
        for(int j = i; j < n; j++) {

            if(arr[j] < arr[min]) {
                min = j; 
            }

        }
            int temp = arr[i]; 
            arr[i] = arr[min]; 
            arr[min] = temp; 
    }
}

int main() {
    int arr[6] = {9,13,20,3,32,22}; 
    sorting(arr,6); 
    
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " "; 
    }
    return 0; 
}