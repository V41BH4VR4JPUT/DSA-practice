// Leetcode 1047 : Remove all adjacent duplicates in string

#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    // stack<char> st;
    // for(char c : s){
    //     if(st.empty() || st.top() != c){
    //         st.push(c);
    //     }
    //     else{
    //         st.pop();
    //     }
    // }
    // string ans = "";
    // while(!st.empty()){
    //     ans += st.top();
    //     st.pop();
    // }
    // reverse(ans.begin(), ans.end());
    // return ans;
    
}
int main(){
    string s = "azxxzy";
    cout << removeDuplicates(s) << endl;
}