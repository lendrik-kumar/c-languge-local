#include<iostream>
#include<string>
using namespace std;

class Recipint{};

class Donor{
    string donor_name;
    double balance;
    public:
        void set_details(string d, double b){
            donor_name = d;
            balance = b;
        }
        void display() {
            cout << donor_name << "\t" << balance;
        }
        double get_balance(){
            return balance;
        }
        friend void calculate(Donor &donor, Recipient &recipient, double amount);
};

class Recipient{
    string recipent_name;
    double balance;
    double amount;
    public:
        void set_details(string n, double b, double a) {
            recipent_name = n;
            balance = b;
            amount = a;
        }
        void display(){
            cout << recipent_name << "\t" << balance << "\t" << amount;
        }
        double get_balance(){
            return balance;
        }
        friend void calculate(Donor&, Recipient&, double&);
};

void calculate(Donor &donor, Recipient &recipient, double amount){
    
}

int main(){

}