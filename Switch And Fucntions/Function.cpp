// question on functions 

// question 1
// return arithmetic progression solution
                #include <bits/stdc++.h>
                using namespace std;
                int Ap(int num){
                    return ((3*num) + 7);
                }
                int main(){
                    int n;
                    cout<<" The given arithmetic progression is 3n + 7"<<endl;
                    cout<<" Enter the value of variable n:";
                    cin>>n;

                    cout<<" The value of the arithmetic progression is: "<<Ap(n)<<endl;
                    return 0;
                }

// question 2
// return Total number of sit bits in a&b 
                #include <bits/stdc++.h>
                using namespace std;  

                int CountingSetBits(int n){
                    int count = 0;
                    while(n > 0){
                        
                        count += n & 1;
                        n = n >> 1;
                    }   
                    return count;
                }
                int main(){
                    int a , b;
                    cout<<" Enter the value of a: ";
                    cin>>a;
                    cout<<" Enter the value of b: ";
                    cin>>b; 
                    int SetBitOfa = CountingSetBits(a);
                    int SetBitOfb = CountingSetBits(b);
                    cout<<" The total number of set bits in a&b is: "<<(SetBitOfa + SetBitOfb)<<endl;

                    return 0;
                }

// question 3
// fibonacci sequence

                #include <bits/stdc++.h>    
                using namespace std;
                int fibonacciSeries(int n)
                {
                    if(n == 0 || n == 1){
                        return n;
                    }
                    else{
                        return (fibonacciSeries(n-1) + fibonacciSeries(n-2));
                    }
                }
                int main(){
                    int n ;
                    cout<< " Enter the number of terms in the fibonacci sequence: ";
                    cin>>n;

                    cout<<" The fibonacci sequence is: ";
                    for(int i = 0; i<=n; i++){
                        cout<<fibonacciSeries(i)<<" ";
                    }
                    return 0;
                }