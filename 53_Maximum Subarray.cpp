class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0;
        int maxSum=INT_MIN;
        for(auto num:nums){
            curSum = max(num, curSum + num);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};


// LeetCode, Maximum Subarray
// 时间复杂度 O(n)空间复杂度 O(n)
class Solution {
public:
int maxSubArray(vector<int>& A) {
return mcss(A.begin(), A.end());
}
private:

template <typename Iter>
static int mcss(Iter begin, Iter end) {
int result, cur_min;
const int n = distance(begin, end);
int *sum = new int[n + 1]; //  ݼn 䶨঻
sum[0] = 0;
result = INT_MIN;
cur_min = sum[0];
for (int i = 1; i <= n; i++) {
sum[i] = sum[i - 1] + *(begin + i - 1);
}
for (int i = 1; i <= n; i++) {
result = max(result, sum[i] - cur_min);
cur_min = min(cur_min, sum[i]);
}
delete[] sum;
return result;
}
};