#include <bits/stdc++.h> 
using namespace std;
int binarySearch(vector<int> nums, int target) 
{
	int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;
}
int main() 
{ 
	vector<int> arr = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	
	int result = binarySearch(arr, x); 
	(result == -1) 
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result; 

	return 0; 
}
