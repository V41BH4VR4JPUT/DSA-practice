// default arguments

#include <iostream>
using namespace std;
// function with default arguments
int add(int a, int b = 5) {
    return a + b;
}
int main() {
    int x = 10;
    cout << "Sum of " << x << " and default value is: " << add(x) << endl; // using default argument
    cout << "Sum of " << x << " and 20 is: " << add(x, 20) << endl; // using default argument
    return 0;
}