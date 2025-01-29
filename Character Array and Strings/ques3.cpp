// checking given string is palindrome or not

#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(char name[]){
    int s = 0;
    int e = strlen(name) - 1;
    if(name[s] != name[e]){
        return false;
    }
    while(s < e){
        if(name[s] == name[e]){
            s++;
            e--;
        }else{
            cout << "The given string is not palindrome" << endl;
            return false;
        }
        if(s == e){
            cout << "The given string is palindrome" << endl;
            return true;
        }
    }
    
}
int main(){
    char name[20];
    cin >> name;
    cout << "The given string is: " << name << endl;
    cout<<CheckPalindrome(name);
    return 0;
}