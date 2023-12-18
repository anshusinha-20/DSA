#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

void orderedSet() {
    // set<int> s1;

    // s1.insert(1);
    // s1.insert(2);
    // s1.insert(3);
    // s1.insert(4);

    // // * printing from start to end
    // for (auto i : s1) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // // * printing from start to end
    // for (auto i = s1.begin(); i != s1.end(); i++) {
    //     cout << *i << " ";
    // }
    // cout << endl;

    // // * printing in reverse order
    // for (auto i = s1.rbegin(); i != s1.rend(); i++) {
    //     cout << *i << " ";
    // }
    // cout << endl;

    // // * printing the size of the set
    // cout << s1.size() << endl;

    // * custom comparator
    set<int, greater<int> > s1;

    s1.insert(1);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);

    // * prints in greater first order
    for (auto i : s1) {
        cout << i << " ";
    }
    cout << endl;

    // * erasing element 
    s1.erase(1);
    s1.erase(s1.begin());
    for (auto i : s1) {
        cout << i << " ";
    }
    cout << endl;
}

void multiSet() { // * multiset can contain duplicate elements
    multiset<int> ms;

    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for (auto i : ms) {
        cout << i << " ";
    }
    cout << endl;

    ms.erase(ms.find(3)); // * will delete the first occurrence of 3
    for (auto i: ms) {
        cout << i << " ";
    }
    cout << endl;

    ms.erase(3); // * will delete all occurrences of 3
    for (auto i : ms) {
        cout << i << " ";
    }
    cout << endl;
}

void unorderedSet() {
    unordered_set<int> us;

    us.insert(1);
    us.insert(1);
    us.insert(3);
    us.insert(5);
    us.insert(2);

    for (auto i : us) {
        cout << i << " ";
    }
    cout << endl;

    us.erase(2);
    for (auto i : us) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    // orderedSet();

    // multiSet();

    unorderedSet();

    return 0;
}