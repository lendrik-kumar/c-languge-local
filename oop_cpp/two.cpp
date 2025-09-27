#include<iostream>
using namespace std;

class Tracker {
    int personId, steps_count, stairs_count;
    static int count;

    public:
        Tracker(int id, int ste = 0, int sta = 0) {
            this->personId = id;
            this->stairs_count = sta;
            this->steps_count = ste;
            count += 1;
        }
        void increment(int n);
        friend void convert_step(Tracker&);
        void displayCount() {
            cout << personId << " " << steps_count;
        }
        static int ret_count () {
            return count;
        }
};

void Tracker :: increment(int n){
    this->steps_count = steps_count + n;
    this->stairs_count = stairs_count + n; 
}

void convert_step (Tracker &t) {
    t.steps_count += (t.stairs_count)/2;
}

int Tracker :: count = 0;

int main () {

    int n;
    cout << "enter size";
    cin >> n;

    Tracker **t = new Tracker*[n];

    int id, ste, sta;

    for (int i = 0; i < n; i++){
        cin >> id >> ste >> sta;
        t[i] = new Tracker(id, ste, sta);
    }

    return 0;
}