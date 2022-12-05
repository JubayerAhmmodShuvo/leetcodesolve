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
    int search(vector<int>& nums, int target)  {
        int s=0;int e=nums.size()-1;int mid=s+(e-s)/2;

        while(s<=e)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }return -1;
    }
};
// int s=0, e=nums.size()-1, mid=s+(e-s)/2;
// while(s<=e){
//   if(nums[mid]==target){
//     return mid;

//   }
//   else if(nums[mid]>target){
//     emid-1;
//   }
//   else {
//     s=mid+1;
//   }
//   mid=s+(e-s)/2;
// }
// return -1;

 */