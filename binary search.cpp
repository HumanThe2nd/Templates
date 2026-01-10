/*
Binary Search Template
Author: Dan Shan
Date: 2025-01-10
*/
int search(vector<int>& nums, int target) { // return index of nums with closest value to target
    int l = 0, r = nums.size() - 1;
    while(l < r){
        int mid = (l + r) >> 1;
        if(nums[mid] == target) return mid;
        if(nums[mid] > target) r = mid;
        else l = mid + 1;
    }
    if(nums[l] != target) return -1;
    return l;
}
