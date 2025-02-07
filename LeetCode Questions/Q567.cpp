// Leetcode - 567. Permutation in String
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n > m){
            return false;
        }
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for(int i = 0 ; i < n ; i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        if(freq1 == freq2){
            return true;
        }
        for(int i = n ; i < m ; i++){
            freq2[s2[i] - 'a']++;
            freq2[s2[i - n] - 'a']--;
            if(freq1 == freq2){
                return true;
            }
        }
        return false;
    }
};

int main(){
    string s1, s2;
    cout<<"Enter the string s1: ";
    getline(cin, s1);
    cout<<"Enter the string s2: ";
    getline(cin, s2);
    Solution obj;
    bool result = obj.checkInclusion(s1, s2);
    cout<<result<<endl;
    return 0;
}