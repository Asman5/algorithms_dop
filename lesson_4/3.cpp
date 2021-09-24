#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    
    stack<int> st;
    int a = 0;
    int result = 0;
    while (cin >> s)
    {
        if(s >= "0" && s <= "9"){
            // "0" -> 0
            // int(s[0]) = 48 != 0 5 == 53 - 48 = 5
            st.push(int(s[0]) - 48);
        }
        if(s == "+" || s == "-" || s == "*"){
            a = st.top();
            st.pop();
            if(s == "+"){
                result = a + st.top();
                st.pop();
                st.push(result);
            }
            if(s == "-"){
                result = st.top() - a;
                st.pop();
                st.push(result);
            }
            if(s == "*"){
                result = a * st.top();
                st.pop();
                st.push(result);
            }
        }
    
    }
    cout << st.top();
    return 0;
}