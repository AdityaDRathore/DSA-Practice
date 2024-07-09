#include<iostream>
using namespace std; 

struct Node {
    public:
    int date; 
    Node* next;

    public:
    Node(int date1, Node*next1) {
        date = date1; 
        next = next1; 
    } 
};

int main() {
    int arr[4] = {2,4,7,8}; 
    Node*y = new Node(arr[2], nullptr); 
    cout << y << endl; 
}