#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        // If array has less than 3 elements, return empty result
        if (nums.size() < 3) return result;
        
        // Sort the array to handle duplicates and use two pointer technique
        sort(nums.begin(), nums.end());
        
        // Fix the first element and use two pointers for the remaining two elements
        for (int i = 0; i < nums.size() - 2; i++) {
            // Skip duplicates for i
            if (i > 0 && nums[i] == nums[i-1]) continue;
            
            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                }
                else if (sum < 0) {
                    // Sum is too small, increment left to get a larger sum
                    left++;
                }
                else {
                    // Sum is too large, decrement right to get a smaller sum
                    right--;
                }
            }
        }
        
        return result;
    }
}; 