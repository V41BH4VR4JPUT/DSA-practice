// find the length of string
#include<bits/stdc++.h>
using namespace std;
int LengthOFstring(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++; 
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    
    cout<<"Hello "<<name<<endl;
    cout<<"Length of name: "<<LengthOFstring(name)<<endl;
}
