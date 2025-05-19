#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        int ans=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>=target){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sl;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int tar;
    cin>>tar;
    cout<<sl.searchInsert(v,tar)<<endl;
    return 0;
}