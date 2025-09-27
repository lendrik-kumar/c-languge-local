#include<iostream>
using namespace std;

class Number{
    int one, two, three, four;
    public:
        Number(){};
        Number(int x, int y){
            one = x;
            two = x;
            three = y;
            four = y;
        }
        Number(int x, int y, int z, int a){
            one = x;
            two = y;
            three = z;
            four = a;
        }
        Number(Number& n){
            one = n.one;
            two = n.two;
            three = n.three;
            four = n.four;
        }
};

int main(){

}