#include<iostream>
using namespace std;

class Test {
    int one;
    int two;

    public:
        Test () {}
        Test(int one, int two) {
            this->one = one;
            this->two = two;
        }
        void set_data() {
            int one, two;
            cin>> one >> two;
            this->one = one;
            this->two = two;
        }
        void update_data(Test &test);
        void output () {
            cout << one << " " << two;
        }
        
};
void Test :: update_data(Test &test) {
    test.one += 1;
    test.two += 1;
}

int main() {

    int n;

    cout << "enter the number of elements";
    cin>> n;

    Test *one = new Test[3];

    for(int i = 0; i < n; i++){
        cout << i + 1 <<" rntry : ";
        one[i].set_data();
    }

    one[0].update_data(one[0]);

    one[0].output();

    return 0;
}