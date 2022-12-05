class Solution {
public:
    int search(vector<int>& nums, int target) {
     int i=0, j=nums.size()-1, pos=-1;
     while(i<=j){
      int mid= i+(j-i)/2;
      if(nums[mid]==target){
        pos=mid;
        break;
      }
      else if(nums[mid]>j){
        j=mid-1;
      }
      else{
        i=mid+1;
      }
     }
     return pos;
		
	}
};
/* 
class Solution {
public:
    int search(vector<int>& nums, int target) {
     int i=0, j=nums.size()-1, pos=-1;
        while(i<=j){
           int mid=i+(j-i)/2;
            if(nums[mid]==target){
              pos=mid;
               break;
               }
            else if(nums[mid]>j){
              j=mid-1;
              }
            else{
              i=mid+1;
              }
        }
        return pos;
		
	}
}; */