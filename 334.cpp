// https://leetcode.com/problems/increasing-triplet-subsequence/description/?envType=study-plan-v2&envId=leetcode-75
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int f = INT_MAX, s = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= f)
            {
                f = nums[i];
            }
            else if (nums[i] <= s)
            {
                s = nums[i];
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Solution s;
    cout << s.increasingTriplet(v) << endl;
    return 0;
}