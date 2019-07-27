class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int n = 0;
		for (auto i : nums){
			if (i < target){
				++n;
			}
			else
				return n;
		}
		return  n;
	}
};