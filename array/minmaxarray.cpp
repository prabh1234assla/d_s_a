#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b){
    return a > b ? b : a;
}

int minimumDeletions(vector<int>& nums) {
    int maxIndex = 0, minIndex = 0;
    const int middle = nums.size()/2;

    for(int i=1; i<nums.size(); ++i){
        nums[i] > nums[maxIndex] ? maxIndex = i : maxIndex = maxIndex;
        nums[i] < nums[minIndex] ? minIndex = i : minIndex = minIndex;
    }

    if(minIndex >= maxIndex)
        return min(minIndex+1, min(nums.size()-maxIndex, nums.size()-minIndex+maxIndex+1));
    else
        return min(maxIndex+1, min(nums.size()-minIndex, nums.size()-maxIndex+minIndex+1));
}

int main(){
    vector<int> s = {1, -3000, 5, 18, -100, 29, 89999, 11, 9, 7};
    cout << minimumDeletions(s) << endl;

    return 0;
}