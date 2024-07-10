#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std; 

struct Node {
    public:
    int data; 
    Node* next;

    public:
    Node(int data1) {
        data = data1;
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

int lengthOfLL(Node* head) {
    int cnt = 0;
    Node*temp = head; 
    while(temp) {
        cnt++; 
        temp = temp->next; 
    }
    return cnt; 
}

int checkLL(Node* head, int val) {
    Node*temp = head; 
    while(temp) {
        if(temp->data == val) {
            return 1; 
        }
        temp = temp->next; 
    }
    return 0; 
}

int main() {
    vector<int> arr = {2,4,7,8}; 
    Node* head = convertArrtoLL(arr); 
    cout << lengthOfLL(head) << endl; 
    cout << checkLL(head, 2);    
}