// sorting an array of 0 1 2
// First approach - 3 pointer approach (dutch national flag algorithm)
#include<bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low], a[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high]);
            high--;
            break;
        }
    }

}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    cout << "array after sorting ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// Second approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6] = {0, 1, 2, 0, 1, 2};
//     sort(arr , arr + 6);
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }
// }