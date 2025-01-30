// maximum occurence of a character in a string

#include<bits/stdc++.h>
using namespace std;
char Func(string s){
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int num = 0;
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }
        else {
            num = ch - 'A';
        }
        arr[num]++;
    }
    int maxN = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > maxN){
            maxN = arr[i];
            ans = i;
        }
    }
    char result  = 'a' + ans;
    return result;  
}
int main(){
    string s;
    cin >> s ;
    cout << Func(s) << endl;
}