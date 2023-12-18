// #include<iostream>
// using namespace std;

// // * Single inheritance 

// class A {
//     public: 
//         void funcA() {
//             cout << "Inherited from A" << endl;
//         }
// };

// class B : public A {
// };

// int main() {
//     B b;
//     b.funcA();

//     return 0;
// }

/////-----/////

// #include<iostream>
// using namespace std;

// // * Multiple inheritance 

// class A {
//     public: 
//         void funcA() {
//             cout << "Inherited from A" << endl;
//         }
// };

// class B {
//     public: 
//         void funcB() {
//             cout << "Inherited from B" << endl;
//         }
// };

// class C : public A, public B {};

// int main() {
//     C c;
//     c.funcA();
//     c.funcB();

//     return 0;
// }

/////-----/////

// #include<iostream>
// using namespace std;

// // * Multi-level inheritance

// class A {
//     public: 
//         void funcA() {
//             cout << "Inherited from A" << endl;
//         }
// };

// class B : public A {};

// class C : public B {};

// int main() {
//     C c;
//     c.funcA();

//     return 0;
// }

/////-----/////

#include<iostream>
using namespace std;

// * Hybrid inheritance

class A {
    public: 
        void funcA() {
            cout << "Inherited from A" << endl;
        }
};

class B : public A {
    public:
        void funcB() {
            cout << "Inherited from B" << endl;
        }
};

class C {
    public: 
        void funcC() {
            cout << "Inherited from C" << endl;
        }
};

class D : public B, public C {
};

int main() {
    D d;
    d.funcA();
    d.funcB();
    d.funcC();

    return 0;
}