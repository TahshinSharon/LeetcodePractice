#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
            int n = candies.size();
            vector<bool>res(n,true);
            int mx=candies[0];
            for(int i=1;i<n;i++){
                if(candies[i]>mx){
                    mx=candies[i];
                }
            }
            for(int i=0;i<n;i++){
                if(candies[i]+extra<mx){
                    res[i]=false;
                }
            }
            return res;
        }
    };
int main(){
    vector<int>candies;
    int n;
    cout<<"How Much Candies Do You Want To Take As Input:";
    cin>>n;
    cout<<"Take All The Candies:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        candies.push_back(x);
    }
    int ex;
    cout<<"Take Input Of Extra Candies:";
    cin>>ex;

    //make a instance of solution class

    Solution sol;

    vector<bool> ans = sol.kidsWithCandies(candies,ex);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }
    return 0;
}