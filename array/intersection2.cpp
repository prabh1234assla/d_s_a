#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans = {};
    int l = 1002;

    int auxillary[l];
    for(int i=0; i<l; ++i)
        auxillary[i] = 0;

    for(int i=0; i<nums1.size(); ++i)
        ++auxillary[nums1[i]%(l+1)];
    
    for(int i=0; i<nums2.size(); ++i){
        if(auxillary[nums2[i]%(l+1)] && auxillary[nums2[i]%(l+1)] > 0){
            ans.push_back(nums2[i]);
            --auxillary[nums2[i]%(l+1)];
        }
    }

    return ans;
}

int main(){
    vector <int> a = {1, 2, 2, 1};
    vector <int> b = {2, 2};
    vector <int> c = intersection(a, b);
    print(c);

    return 0;
}