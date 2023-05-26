#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void print(vector<int>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}

void sortColors(vector<int>& nums){
    int l=0, m=0, r=nums.size()-1;

    while(m<=r){
        if(nums[m] == 0)
            swap(nums[l++], nums[m++]);
        else if(nums[m] == 1)
            m++;
        else
            swap(nums[m], nums[r--]);
    }

}

int main(){
    vector<int> a = {0, 2, 1, 2, 0, 1};
    //0 2 1 2 0 1 | 005
    //0 2 1 2 0 1 | 115
    //0 1 1 2 0 2 | 114
    //0 1 1 2 0 2 | 124
    //0 1 1 2 0 2 | 134
    //0 1 1 0 2 2 | 133
    //0 0 1 1 2 2 | 243
    sortColors(a);
    print(a);
    return 0;
}