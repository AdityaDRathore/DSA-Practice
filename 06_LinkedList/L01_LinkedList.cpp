#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

struct Node {
    public:
    int date; 
    Node* next;

    public:
    Node(int date1) {
        date = date1;
        next = nullptr;  
    } 
};

Node* convertArrtoLL(vector<int>&arr) {
    Node* head = new Node(arr[0]); 
    Node* mover = head; 
    for(int i = 1; i < arr.size(); i++) {
        Node*temp = new Node(arr[i]); 
        mover->next = temp; 
        mover = temp; 
    }
    return head; 
}

int main() {
    vector<int> arr = {2,4,7,8}; 
    Node* head = convertArrtoLL(arr); 
    cout << head->date << endl; 
}