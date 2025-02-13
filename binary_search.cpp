class Solution {
    public:
        int search(vector<int>& num, int target) {
            sort(num.begin(),num.end());
           int st=0;
           int end=num.size()-1;
           while(st<=end){
            int mid=st+(end-st)/2;
            if(target==num[mid]){
                return mid;
            }else if(target<num[mid]){
                end=mid-1;
            }
            else if(target>num[mid]){
                st=mid+1;
            }
           }
           return -1; 
        }
    };