// Problem Link: https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include <iostream>
#include <string>
#include <map>
using namespace std;
class Solution
{
public:
    string reverseVowels(string s)
    {
        int n = s.length();
        map<char, int> mp;
        mp['a'] = 1;
        mp['A'] = 1;
        mp['e'] = 1;
        mp['E'] = 1;
        mp['I'] = 1;
        mp['i'] = 1;
        mp['o'] = 1;
        mp['O'] = 1;
        mp['u'] = 1;
        mp['U'] = 1;
        string ss = "";
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]])
            {
                ss += s[i];
            }
        }
        int j = ss.length() - 1;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]])
            {
                s[i] = ss[j];
                j--;
            }
        }
        return s;
    }
};
int main()
{
    Solution sol;

    string s;
    cin >> s;
    cout << sol.reverseVowels(s) << endl;
    return 0;
}