// Algorithms in STL
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    for (auto i : v) cout<<i<<" ";
    cout<<endl;
    cout<<binary_search(v.begin(),v.end(),3)<<endl;

    cout<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a = 3;
    int b = 5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    rotate(v.begin(), v.begin()+2,v.end());

    for(auto i : v) cout<<i<<" ";
    cout<<endl;
    string s = "hello world";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    sort(v.begin(),v.end());
    for(auto i : v) cout<<i<<" ";
    cout<<endl;
}
