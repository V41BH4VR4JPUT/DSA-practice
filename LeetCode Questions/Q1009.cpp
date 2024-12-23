// Question Number 1009
// Question Name: Complement of Base 10 Integer
// Solution of the question

int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if( n == 0){
            return 1; 
        }

        while( m != 0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans ;
    }