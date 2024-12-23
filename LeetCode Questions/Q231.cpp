// Question Number 231
// Question Name: Power of Two
// Solution of the question

for(int i = 0; i<31; i++){
    int ans = pow(2 , i);
    if(ans == n){
        return true;
    }
}
return false;