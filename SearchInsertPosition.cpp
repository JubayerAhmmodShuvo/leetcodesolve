class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int L,R,M;
         L=0;
        R=n-1;
        while(L<=R){
            M=(L+R)/2;
            if(target==nums[M]) return M;
            else if(target < nums[M]) R=M-1;
            else L=M+1;
        }
        
        return L;
        
        
    }
};