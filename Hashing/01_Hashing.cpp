//-------------------------------------------Hashing concept-- (Make a Hash array to pre store and fetch value)--------------------------------------------------

// #include<iostream>
// using namespace std; 

// int main() {
//     int n; 
//     cin >> n; 
//     int arr[n]; 

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i]; 
//     }

//     int hash[13] = {0};  

//     for(int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while(q--) {
//         int number; 
//         cin >> number;
//         cout << hash[number] << endl; 
//     }
    
//     return 0; 
// }

//------------------------------------------------------------Hasing of abchdjre (Stirng) form---------------------------------------------------------------

// #include<iostream>
// using namespace std; 

// int main() {
//     string s; 
//     cin >> s; 

//     int hash[26] = {0}; 
//     for(int i = 0; i < s.length(); i++) {
//         hash[s[i] - 'a']++; 
//     }

//     int q; 
//     cin >> q;
//     while (q--) {
//         char c; 
//         cin >> c; 
//         cout << hash[c - 'a'] << endl;  
//     } 
    
//     return 0; 
// } 
