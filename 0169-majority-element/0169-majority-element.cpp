class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand = 0;
        int point = 0;
        for(int i = 0;i < n;i++){
            if(point==0){
                cand = nums[i];
            }
            if(cand==nums[i]){
                point++;
            }
            else{
                point--;
            }
        }
        return cand;
    }
};