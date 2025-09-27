#include<iostream>
#include<stack>
using namespace std;

string post_to_in(string s){
    stack<string> st;
    int i = 0;

    while(i < s.length()){
        char ch = s[i];

        if(ch >= 'a' && ch <= 'z'){
            st.push(string(1, s[i]));
        }
        else {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string a = "(" + s2 + ch + s1 + ")";
            st.push(a);
        }
        i++;
    }
    return st.top();
}

int main(){

    string st = "ab-de+f*/";
    cout << post_to_in(st);

    return 0;
}