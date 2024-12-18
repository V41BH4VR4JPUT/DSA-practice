#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n ;

       //pattern 29
       /*
              1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1               
       */
//       int row = 1;
//       while(row<=n){
//       // First triangle(space printing)
//       int space = n - row;
//       while(space){
//         cout<<" ";
//         space--;
//       }

//       // 2nd triangle
//       int col = 1;
      
//       while(col<=row){
//        cout<<col;
       
//        col++;
//       }
       
//       // 3rd triangle
//       int value = row - 1;
//       while(value){
//         cout<<value;
//         value--;
//       }

//       cout<<endl;
//       row++;

// }
   // pattern 30

   /*
   1 2 3 4 5 5 4 3 2 1 
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1  
   1 * * * * * * * * 1
   */

  int row = 1;
  while(row<=n){
   // first triangle
   int col = 1;
   while(col<=n-row + 1){
    cout<<col;
    col++;
   }
  // printing star triangle
  int star = 1;
  while(star<=2*(row-1)){
    cout<<"*";
    star++;
  }
  // second triangle
  int value = n - row + 1;
  while(value>=1){
    cout<<value;
    value--;
  }







   cout<<endl;
   row++;
  }
    return 0 ;
}