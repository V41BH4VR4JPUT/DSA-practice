// Question Number 191
// Question Name: Number of 1 Bits
// Solution of the question


    int count = 0;
    while(n != 0){
      if(n & 1) count++;
      n = n >> 1;
    }    
    return count;
