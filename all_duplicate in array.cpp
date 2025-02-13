class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
           unordered_map<int,int>freq;
           vector<int>ans;
           int n=nums.size()-1;
           for(int val:nums){
             freq[val]++;
           } 
          for(auto pair:freq){
            if(pair.second==2){
                ans.push_back(pair.first);
            }
          }
           return ans;
        }
    };