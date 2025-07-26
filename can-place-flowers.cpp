#include<iostream>
#include<vector>
using namespace std;
//https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int nn=flowerbed.size();
            bool f=false;
            if(!flowerbed[0]){
                flowerbed[0]=1;
                n--;
            }
            for(int i=0;i<nn;i++){
                if(n==0){
                    break;
                }
                if(nn>1&&i==0&&!flowerbed[i+1]&&!flowerbed[i]){
                    flowerbed[i]=1;
                    n--;
                }
                else if(nn>1&&i==nn-1&&!flowerbed[i-1]&&!flowerbed[i]){
                    flowerbed[i]=1;
                    n--;
                }
                else if(i!=0&&i!=nn-1&&!flowerbed[i-1]&&!flowerbed[i+1]&&!flowerbed[i]){
                    flowerbed[i]=1;
                    n--;
                }
            }
            if(n==0){
                f=true;
            }
            return f;
        }
    };

int main(){
    vector<int>v;
    int n;
    int num;
    cout<<"Enter The Size Of The flowerbed Vector"<<endl;
    cin>>n;
    cout<<"Take Input For Flowerbed Vector"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter The New Flower Number"<<endl;
    cin>>num;
    Solution sol;
    bool res=sol.canPlaceFlowers(v,num);
    cout<<res<<endl;
}
