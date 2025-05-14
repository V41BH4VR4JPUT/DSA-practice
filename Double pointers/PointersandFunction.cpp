// double pointers and functions 
#include <bits/stdc++.h>
using namespace std;
void fun(int **p)
{
    **p = **p + 1; // changes the value of i
    *p = *p + 1; // changes the value of p
   // *p = *p + 1; // does not change the value of **p
    // p = p + 1; // does not change the value of **p
    // cout << **p << endl;
}
int main(){
    int i = 10;
    int *p = &i;
    int **q = &p;
    cout<<"before"<<endl;
    cout << i <<endl;
    cout << *p << endl;
    cout << **q << endl;
    fun(q);
    cout <<"after" << endl;
    cout << i <<endl;
    cout << *p << endl;
    cout << **q << endl;
    return 0;
}
