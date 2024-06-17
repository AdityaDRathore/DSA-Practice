//---------------------------------------------Fibonacci Series using recurssion--------------------------------------------------

#include<iostream>
using namespace std; 

int fib(int n) {
    
    if (n <= 1) {
        return n; 
    }

    int first = fib(n-1); 
    int second = fib(n-2); 

    return first + second; 
}

int main() {
    int n; 
    cin >> n; 
    cout << endl; 
    cout << fib(n) << endl; 
    return 0; 
}
