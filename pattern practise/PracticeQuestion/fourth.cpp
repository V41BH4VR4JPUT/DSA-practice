/*
    *
   ***
  *****
 *******
*********  

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

   int row = 1;
     while(row<=n){
        // space printing
        int space = n - row;
        while(space){
            cout<<" ";
            space--;

        }

        //printing star
        int col = 1;
        while(col<= row){
            cout<<"*";
            col++;
        } 

        int value = row - 1;
      while(value){
        cout<<"*";
        value--;   
        }

        cout<<endl;
        row++;

        
    }
    
        
    


    
    return 0;
}