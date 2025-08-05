// https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int cnt = 0;
        int n = nums.size();
        int prod1 = 1;
        int prod2 = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (!nums[i])
            {
                cnt++;
            }
            if (!cnt)
            {
                prod1 *= nums[i];
            }
        }
        int tmp = 1;
        for (int i = 0; i < n; i++)
        {
            tmp *= nums[i];
            if (!nums[i])
            {
                cnt--;
            }
            if (!cnt)
            {
                if (nums[i])
                {
                    prod1 = prod1 / nums[i];
                }
                nums[i] = prod1 * prod2;
            }
            else
            {
                nums[i] = 0;
            }
            prod2 = tmp;
        }
        return nums;
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
    Solution sol;
    vector<int> ans = sol.productExceptSelf(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}