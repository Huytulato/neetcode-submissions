class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();

        // Duyệt qua từng phần tử trong mảng
        for(int i = 0; i<n; i++){
            // Tính số mục tiêu cần tìm
            int complement = target - nums[i];

            // Có tìm thấy số complement đấy trong map không
            if(mp.find(complement) != mp.end()){
                return {mp[complement], i};
            }

            // Chưa có, ghi số hiện tại vào sổ
            // mp[giá_trị] = chỉ_số — "Số có giá trị bao nhiêu thì nằm ở chỉ số nào"
            mp[nums[i]] = i;
        }

    }
};
