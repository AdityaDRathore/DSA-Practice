//-------------------------------Reverse an array-----------------------------------------

// #include<iostream>
// using namespace std; 

// void reverseArr(int i, int arr[], int n) {

//     if(i >= n/2) return; 

//     swap(arr[i], arr[n-i-1]); 
//     reverseArr(i+1, arr, n); 
// }

// int main(){
//     int arr[5] = {1,3,4,6,2}; 
//     reverseArr(0,arr,5); 

//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " "; 
//     }

//     return 0; 
// }


//-----------------------------------Is a Palindrome--------------------------------------

#include<iostream>
using namespace std; 

bool isPalindrome(int i, int s[], int n) {

    if(i >= n/2) return true; 
    if(s[i] != s[n-i-1]) return false; 

    isPalindrome(i+1, s, n); 
} 

int main() {

    int s[5] = {'M','A','D','S','M'}; 
    cout << isPalindrome(0, s, 5) << endl; 
    return 0; 
}