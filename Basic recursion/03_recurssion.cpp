//-----------------------------------Sum of N numbers-----------------------------------

#include<iostream>
using namespace std; 

int sum = 0; 

int sumOfN(int n) {
    
    if(n == 1){
        return 1; 
    }

    return sumOfN(n-1) + n; 


}

int main() {

    cout << sumOfN(3) << endl; 
    return 0; 
}