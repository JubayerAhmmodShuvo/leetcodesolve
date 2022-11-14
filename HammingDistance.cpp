class Solution {
public:
    int hammingDistance(int x, int y) {
        int maxNum=max(y,x);
        int minNum=min(y,x);
        int ans=0;
        
        while(maxNum>0){
            int a= maxNum&1;
            int b=minNum&1;
            if(a!=b){
                ans++;
            }
            maxNum= maxNum>>1;
            minNum=minNum>>1;
        }
        return ans;
        
        
    }
};