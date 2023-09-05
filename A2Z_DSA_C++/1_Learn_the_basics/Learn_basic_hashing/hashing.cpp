#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE APPROACH TO FIND THE NUMBER OF OCCURENCES OF AN ELEMENT IN A VECTOR  
int main() {
    vector<int> v1 = {1, 2, 3, 1, 2, 3, 1, 1, 1};
    int count = 0;
    int ele;

    cout << "Enter element to search for: ";
    cin >> ele;

    for (int i = 0; i < v1.size(); i += 1) {
        if (ele == v1[i]) {
            count += 1;
        }
    }
    cout << count << endl;

    return 0;
}