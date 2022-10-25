class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> num;
        
        vector<int>::iterator it;
        for(it=nums.begin(); it!=nums.end();it++){
            int ele= *it;
            if(find(num.begin(),num.end(),ele)!=num.end()){
                nums.erase(it);
                it--;
            }
            else{
                num.push_back(*it);
            }
        }
        return  nums.size();
        
    }
};