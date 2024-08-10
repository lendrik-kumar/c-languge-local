// #include<iostream>

// using namespace std;

// int decimal(int n)
// {
//     int x=1;
//     int b=0;
// while(x<=n){
//     x=x*2;
//     x=x/2;
// while(x>0){
//     int lastd = n/x;
//     n=n-lastd*x;
//     x=x/2;
//     b=b*10 + lastd;
// }
// }
//     return b;
// }
// int main(){
// int n,binary;
// cout<<"enter the value"<<
// cin>>n>>
// binary=decimal(n);
// cout<<"binary value is"<<binary<<endl;
//     return 0;
// }
#include <iostream>

using namespace std;

// Function to convert decimal to binary
int decimalToBinary(int n) {
    int binary = 0;
    int base = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * base;
        base *= 10;
        n /= 2;
    }

    return binary;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binaryNumber = decimalToBinary(decimalNumber);
    cout << "Binary representation: " << binaryNumber << endl;

    return 0;
}