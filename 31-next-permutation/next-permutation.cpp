class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    int curr = end, pre = curr - 1;
    while (pre >= start)
    {
        if (nums[curr] <= nums[pre])
        {
            curr --; pre --;
        } else
        {
            break;
        }
    }
    if (curr <= start)
    {
        for (int i = 0; i <= end; i ++, end --)
        {
            swap(nums.at(i), nums.at(end));
        }
        return;
    };
    for (curr = end; nums[curr] <= nums[pre] && curr >= start; curr --){}
    swap(nums.at(curr), nums.at(pre));
    for (int i = pre + 1; i <= end; i ++, end --)
    {
        swap(nums.at(i), nums.at(end));
    }
    }
};