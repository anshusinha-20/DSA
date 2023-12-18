#include<iostream>
using namespace std;

class Student {
    string name; // * by default its a private data member
    public:
        int age;
        string gender;

        void setName(string s1) {
            name = s1;
        }

        void printInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Gender: " << gender << endl;
            cout << endl;
        }

        Student() {
            cout << "Default constructor" << endl; // * default constructor
        }

        Student(string n, int a, string g) { // * parameterized constructor
            cout << "Parameterized constructor" << endl;
            name = n;
            age = a;
            gender = g;
        }

        Student(Student &a) {
            cout << "Copy constructor" << endl;
        }

        // * operator overloading
        bool operator == (Student &a) {
            if (name == a.name && age == a.age && gender == a.gender) {
                return true;
            }
            return false;
        }

        ~Student() {
            cout << "Destructor called" << endl;
        }


};  

int main() {    
    // Student arr[3];
    // string s1;
    // for (int i = 0; i < 3; i++) {
    //     cin >> s1; 
    //     arr[i].setName(s1);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }
    // cout << endl;

    // for (int i = 0; i < 3; i++) {
    //     arr[i].printInfo();
    // }

    Student a("Alex", 21, "M"); // * call to parameterized constructor
    // a.printInfo();

    Student b; // * call to default constructor
    Student c = a; // * call to copy constructor

    if (c == a) {
        cout << "same" << endl;
    }
    else {
        cout << "not same" << endl;
    }

    return 0;
}