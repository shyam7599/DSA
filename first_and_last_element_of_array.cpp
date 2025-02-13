class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int st=0;
            int end=nums.size()-1;
           int first=-1,last=-1;
           while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                     st=mid+1;
            }
            else{
                end=mid-1;
            }
           }
    
            
          st=0;
          end=nums.size()-1;
        
           while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                last=mid;
                st=mid+1;
            }
             else if(nums[mid]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        } 
        return {first,last}; 
        }
    };