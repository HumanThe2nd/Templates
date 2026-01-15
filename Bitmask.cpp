/*
C++ template for bitmasking subsets
Author: Dan Shan
Date: 2026-01-14
Mainly created to reference for the implementation format
*/
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(1 << n);
    for(int mask = 0; mask < (1 << n); ++mask){ // bitmask
        for(int j = 0; j < n; ++j){
            if((1 << j) & mask) res[mask].emplace_back(nums[j]);
        }
    }
    return res;
}
