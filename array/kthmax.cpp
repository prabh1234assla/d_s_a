#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end(), greater<int>());

    return nums[k-1];
}

int main(){
    vector<int> s = {1, -3000, 5, 18, -100, 29, 89999, 11, 9, 7};
    cout << findKthLargest(s, 3) << endl;
    print(s);
    return 0;
}