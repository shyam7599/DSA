#include<unordered_map>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        int val;
        for(auto val:nums){
            umap[val]++;
        }

        for(int val:nums){
            if(umap[val]>1){
                return val;
            }
        }
        return 0;
    }
};