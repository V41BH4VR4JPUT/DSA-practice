// Macros in cpp

#include <iostream>
using namespace std;
#define PI 3.14
#define min(a,b) ((a)<(b)?(a):(b))

int main(){
    int r = 5;
    double area = PI * r * r; // using macro
    cout << "Area of circle with radius " << r << " is: " << area << endl;
    int x = 10, y = 20;
    cout << "Minimum of " << x << " and " << y << " is: " << min(x,y) << endl; // using macro
    return 0;
}