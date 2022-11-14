class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count =0;
        set <int> prime={2, 3, 5, 7, 11, 13, 17 ,19};
        for(int i=left; i<=right; i++){
        int bits=0;
            for(int n=i; n; n>>=1)
                bits+=n&1;
            count+= prime.count(bits);
        }
        return count;
        
        
    }
};