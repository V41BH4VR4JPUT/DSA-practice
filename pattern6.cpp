#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n; 

   //pattern 20
   /*
   D
   C D
   B C D
   A B C D
   */
    // int row =1;
    // while(row<=n){
    //     int col =1 ;
    //     char start = 'A' + n - row;
    //     while(col<=row){
    //         cout<<start<<" ";
    //         start++; 
    //         col++;

    //     }
    //     cout<<endl;
    //     row++;
    // }


    //pattern 21
    /*
    A B C
    B C D
    C D E
    */
//    int row =1;
//     while(row<=n){
//         int col =1 ;
//         char start = 'A' + row -1;
//         while(col<=n){
//             cout<<start<<" ";
//             start++; 
//             col++;

//         }
//         cout<<endl;
//         row++;
//     }
    
    //pattern 22
    /*
       *
      **
     ***
    ****   
    */
    //  int row = 1;
    //  while(row<=n){
    //     // space printing
    //     int space = n - row;
    //     while(space){
    //         cout<<" ";
    //         space--;

    //     }

    //     //printing star
    //     int col = 1;
    //     while(col<= row){
    //         cout<<"*";
    //         col++;
    //     }    
    //     cout<<endl;
    //     row++;
    // }

    //pattern 23
    /*
    *****
    ****
    ***
    **
    *
    */
    // int row = 1;
    //  while(row<=n){
    //     // printing star
    //     int col = 1;
    //     while(col<= n - row + 1){
    //         cout<<"*";
    //         col++;
    //     }    
    //     cout<<endl;
    //     row++;
    // }

    //pattern 24
    /*
    ****
     ***
      **
       *
    */
//    int row = 1;
//    while(row<=n){
//     //space printing
//     int space = row - 1;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     // star printing
//     int col = 1;
//     while(col<= n - row +1){
//         cout<<"*";
//         col++;
//     }
//     cout<<endl;
//     row++;
//    }
  

  //pattern 25
  /*
  1 1 1 1
    2 2 2
      3 3 
        4
  */
//    int row = 1;
//    while(row<=n){
//     //space printing
//     int space = row - 1;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     // star printing
//     int col = 1;
//     while(col<= n - row + 1){
//         cout<<row;
//         col++;
//     }
//     cout<<endl;
//     row++;
//    }
      

      //pattern 26
      /*
            1
          2 2
        3 3 3
      4 4 4 4 
          */

//    int row = 1;
//    while(row<=n){
//     //space printing
//     int space = n - row;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     // star printing
//     int col = 1;
//     while(col<=row){
//         cout<<row;
//         col++;
//     }
//     cout<<endl;
//     row++;
//    }

     // pattern 27
     /*
     1 2 3 4
       2 3 4
         3 4
           4
    */
//    int row = 1;
//    while(row<=n){
//     // space printing
//     int space = row - 1;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     // Number printing
//     int col = 1;
//     int start = row;
//     while(col<= n -row + 1){
//        cout<<start;
//        start++;
//        col++;
//     }
//     cout<<endl;
//     row++;
//    }


   //pattern 28
   /*
        1
      2 3
    4 5 6
  7 8 9 10    
   */

  int row = 1;
  int start = 1;
  while(row<=n){
    //space printing
    int space = n - row;
    while(space){
        cout<<" ";
        space--;
    }

    // Number printing
    int col = 1;
    while(col<=row){
        cout<<start<<" ";
        start++;
        col++;

    }
    cout<<endl;
    row++;
  }
    return 0;


}