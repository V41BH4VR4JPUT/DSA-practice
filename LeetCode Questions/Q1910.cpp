// Leetcode - 1910. Remove All Occurrences of a Substring
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();
        while(s.find(part) != string::npos){
            int pos = s.find(part);
            s.erase(pos, n);
        }
        return s;
    }
};

int main(){
    string s, part;
    cout<<"Enter the string: ";
    getline(cin, s);
    cout<<"Enter the part: ";
    getline(cin, part);
    Solution obj;
    string result = obj.removeOccurrences(s, part);
    cout<<result<<endl;
    return 0;
}