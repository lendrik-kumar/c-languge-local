#include<iostream>
#include<stack>
using namespace std;

string pre_to_in(string s){
    stack<string> st;
    int i = 0;

    while(i < s.length()){
        char ch = s[i];

        if(ch >= 'a' && ch <= 'z'){
            st.push(string(1, ch));
        }
        else {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string a = string(1,ch) + s2 + s1 ;
            st.push(a);
        }
        i++;
    }
    return st.top();
}

int main(){

    string st = "ab-de+f*/";
    cout << pre_to_in(st);

    return 0;
}