// returning largest row sum with its index
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3] = {{3, 6, 9}, {1, 4, 7}, {2, 8, 9}};
    int max_sum=INT_MIN;
    int row_index=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>max_sum){
            max_sum=sum;
            row_index=i;
        }
    }
    cout<<row_index<<" "<<max_sum<<endl;
    return 0;
}