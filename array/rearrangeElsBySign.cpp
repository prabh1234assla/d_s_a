#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}
vector<int> rearrangeArray(vector<int>& nums) {
    int pos = 0, neg = 1;
    vector<int> ans(nums.size(), 0);

    for(int i=0; i<nums.size(); ++i){
        if(nums[i] < 0){
            ans[neg] = nums[i];
            neg+=2;
        }
        else{
            ans[pos] = nums[i];
            pos+=2;
        }
    }

    return ans;
}

int main(){
    vector <int> a = {3,1,-2,-5,2,-4};
    vector <int> b = rearrangeArray(a);
    print(b);

    return 0;
}