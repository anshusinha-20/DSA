#include<iostream>
#include<set>
using namespace std;

void sets() { // stores the elements in sorted unique order fashion
    set<int> s;
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.insert(2); // {1, 2}
    s.insert(0); // {0, 1, 2}
    s.insert(5); // {0, 1, 2, 5}

    auto i = s.find(1); // if 1th element is in the set 's', it return an iterator pointing to the value else returns s.end()
    
    s.erase(0); // erases 0 if found

    auto first = s.begin(); // stores the iterator pointing to the first value of the set

    int cnt = s.count(0); // counts the number of occurences of '0' in the set 's'
    cout << cnt << endl;

    // rest functions are similar to vector
}  

int main() {
    sets();

    return 0;
}