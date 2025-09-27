#include <iostream>
#include <stack>
using namespace std;

int priority(char ch) {
    if(ch == '^') return 3;         
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return -1;
}

string reverse(string st) {

    for (int i = 0; i < st.length()/2; i++){
        char temp = st[i];
        st[i] = st[st.length() - i - 1];
        st[st.length() - i - 1] = temp;
    }

    for(int j = 0; j < st.length(); j++){
        if(st[j] == '(') st[j] = ')';
        else if(st[j] == ')') st[j] = '(';
    }

    return st;
}

string infix_to_prefix(string s) {
    stack<char> st;  
    string ans;
    string infix = reverse(s);

    for(int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            ans += c;
        }
        else if(c == '(') {
            st.push(c);
        }
        else if(c == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); 
        }
        else {
            while(!st.empty() && 
                 ((priority(c) <= priority(st.top())) || (priority(c) == priority(st.top()) && c != '^'))
            ) {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return reverse(ans);
}

int main() {
    string infix = "a+b*(c^d-e)";
    cout << "prefix: " << infix_to_prefix(infix) << endl;
    return 0;
}