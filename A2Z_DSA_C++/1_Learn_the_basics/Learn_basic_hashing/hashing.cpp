#include<iostream>
#include<vector>
#include<map>
using namespace std;

// // BRUTE FORCE APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER IN A VECTOR - Big theta (n)
// int main() {
//     vector<int> v1 = {1, 2, 3, 1, 2, 3, 1, 1, 1};
//     int count = 0;
//     int ele;

//     cout << "Enter element to search for: ";
//     cin >> ele;

//     for (int i = 0; i < v1.size(); i += 1) {
//         if (ele == v1[i]) {
//             count += 1;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }

// // HASHING APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER
// int hashh[10000000]; // can take 10^7 values, and everything is initialized as zero
// int main() {
//     int arr_size; // size of the array
//     cout << "Enter size of the array: ";
//     cin >> arr_size;

//     int arr[arr_size]; // initializing the size of the array

//     cout << "Enter array elements: ";
//     for (int i = 0; i < arr_size; i += 1) {   
//         cin >> arr[i]; // taking the inputs and storing it in the array
//     }

//     // precomputation
//     // int hashh[1000000] = {0}; // hash[10000000] will be segmentation fault, i.e, 10^7, max limit 10^6
//     for (int i = 0; i < arr_size; i += 1) {
//         hashh[arr[i]] += 1; // loop through the array elements and increment the value of hash elements, i.e, if arr[0] = 1, arr[1] = 1, than hash[1] += 1, hash[1] += 1, so 1 exited two times, was stored in the hash array
//     }

//     // fetching 
//     int num_el;
//     cout << "Enter number of elements to search for: ";
//     cin >> num_el;
    
//     for (int i = 0; i < num_el; i += 1) {
//         int el;
//         cout << "Enter the element: ";
//         cin >> el;
//         cout << hashh[el] << endl;
//     }

//     return 0;
// }

// // HASHING APPROACH TO FIND THE NUMBER OF OCCURENCES OF A STRING
// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     // precomputation
//     int hashh[256] = {0};
//     for (int i = 0; i < s.size(); i += 1) {
//         hashh[s[i]] += 1; // the string is autocasted to its ascii integer 
//     }

//     // fetching
//     int num_char;
//     cout << "Enter number of characters to search for: ";
//     cin >> num_char;

//     for (int i = 0; i < num_char; i += 1) {
//         char ch;
//         cout << "Enter a character: ";
//         cin >> ch;
//         cout << hashh[ch] << endl; // suppose the character is a, so a = 97, and hassh[97] = 1, if the string was anshu, a occured one time, i.e, 97th index had value 1
//     }

//     return 0;
// }

// MAP APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN INTEGER - Big theta(log n)

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    // precomputation
    map<int, int> mp;
    for (int i = 0; i < n; i += 1) {
        mp[arr[i]] += 1;
    }

    // feteching
    int num_el;
    cout << "Enter number of elements to search for: ";
    cin >> num_el;

    for (int i = 0; i < num_el; i += 1) {
        int el;
        cout << "Enter a number: ";
        cin >> el;
        cout << mp[el] << endl;
    } 

    return 0;
}