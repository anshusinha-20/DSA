#include<iostream>
#include<string>
using namespace std;

int main() {
    // * input and output strings
    // string str1(5, 'a');
    // cout << str1 << endl;

    // string str2;
    // cin >> str2;
    // cout << str2 << endl;

    // string str3;
    // getline(cin, str3);
    // cout << str3 << endl;

    // * adding strings
    // string s1 = "fam";
    // string s2 = "ily";

    // cout << s1 + s2 << endl;
    // s1 = s1 + s2;
    // cout << s1 << endl;

    // s1.append(s2);
    // cout << s1 << endl;

    // * accessing values through indexing
    // string s1 = "hello world!";
    // cout << s1[2] << endl;

    // * clearing strings
    // string s1 = "dfadsfadfda dfsd";
    // s1.clear();
    // cout << s1 << endl;

    // * comparing strings
    // string s1 = "abc";
    // string s2 = "xyz";
    // string s3 = "abc";

    // cout << s2.compare(s1) << endl;

    // if (s1.compare(s3) == 0) 
    //     cout << "strings are equal" << endl;

    // * checking if a string is empty
    // string s1 = "abc";
    // s1.clear();
    // if (s1.empty())
    //     cout << "string is empty!" << endl;

    // * erasing strings, from (start or middle or end) by putting index values
    // string s1 = "hello world!";
    // s1.erase(4, 1); // from index 3 erase 3 values
    // cout << s1 << endl;

    // * finding in strings, returns the index value if found
    // string s1 = "hello world!";
    // cout << s1.find("o") << endl; // will return 4

    // * inserting in a string by index values
    // string s1 = "hello";
    // cout << s1 << endl;
    // s1.insert(5, " world!");
    // cout << s1 << endl;

    // * finding length of a string
    // string s1 = "abc";
    // cout << s1.size() << endl;
    // cout << s1.length() << endl;

    // * getting sub-string from a string
    // string s1 = "hello world!";
    // string s2 = s1.substr(4, 3); // from index value and length of the sub-string
    // cout << s2 << endl;

    // * string to integer
    // string s1 = "3232";
    // int n1 = stoi(s1);
    // cout << n1 << endl;

    // * integer to string
    // int n1 = 2342;
    // string s1 = to_string(n1) + "3"; // 3 will not be added, it will just get appended
    // cout << s1 << endl;

    // * sorting a string
    string s1 = "gadgds";
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}