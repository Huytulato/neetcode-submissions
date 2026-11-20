class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, bool> count;
        for(int x:nums){
            if(count[x] == 0){
                count[x] = 1;
            } else {
                return true;
            }
        }
        return false;
    }
};