// Creating a wave pattern in a 2d array

#include<bits/stdc++.h>
using namespace std;

void wavePattern(vector<vector<int>> arr){
    for(int i=0; i<arr[0].size(); i++){
        if(i%2==0){
            for(int j=0; j<arr.size(); j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=arr.size()-1; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }

    /*
    vector<int> ans;
    for(int col = 0; col < mcols; col++){
        if(col&1){
            for(int row = mrows-1; row >= 0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0; row < mrows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
        return ans;


    */

}
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    wavePattern(arr);

}