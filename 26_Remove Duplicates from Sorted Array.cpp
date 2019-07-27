class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		int newTail = 0;
		for (auto i = 1; i < nums.size(); i++)
		{
			if (nums[i] != nums[newTail]){
				newTail = newTail + 1;
				nums[newTail] = nums[i];
			}
		}
		return newTail + 1;
	}
};