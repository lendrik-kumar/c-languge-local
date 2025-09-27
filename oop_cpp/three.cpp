// #include<iostream>
// using namespace std;

// class Triangle{
//     int base;
//     int height;

//     public: 
//         Triangle(){}

//         float area () {
//             return 0.5 * this->base * this->height;
//         }

//         static Triangle& compare(Triangle& a, Triangle& b){
//             if (a.area() > b.area()) return a;
//             return b;
//         }

//         void display (){
//             cout << "base : " << base << "\t" << "height : " << height << "\t" << "area :" << area; 
//         }
// };

// int main() {

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    // Define a union so that the same variable name `count`
    // can store items or customers
    union {
        int count;  
    };

    // Track items
    count = 20;   // number of items
    int items = count;

    // Track customers
    count = 12;   // number of customers
    int customers = count;

    // Now display number of items only
    cout << "Number of items: " << items << endl;

    return 0;
}