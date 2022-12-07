class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0, n=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<0)
            {
                n++;
            }
            else if(nums[i]==0){
                c++;
            }
        }
        if(c>0) 
        return 0;
        if(n%2==0) 
        return 1;
        else
         return -1;
    }
};