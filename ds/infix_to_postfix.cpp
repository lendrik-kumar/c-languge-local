#include <iostream>
#include <stack>
using namespace std;

int priority(char ch) {
    if(ch == '^') return 3;         
    if(ch == '*' || ch == '/') return 2;
    if(ch == '+' || ch == '-') return 1;
    return -1;
}

string infix_to_post(string infix) {
    stack<char> st;  
    string ans;

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
                //  (
                    (priority(c) <= priority(st.top())) 
                //  || 
                //  (priority(c) == priority(st.top()) && c != '^'))
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

    return ans;
}

int main() {
    string infix = "a+b*(c^d-e)";
    cout << "Postfix: " << infix_to_post(infix) << endl;
    return 0;
}