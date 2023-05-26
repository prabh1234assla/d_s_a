#include <iostream>
#include <vector>
using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}

int max(int a, int b){
    return a > b ? a : b;
}

int minMaxGame(vector<int>& nums) {
    int n = nums.size(), i = n;

    while(n != 1){
        if(i == n){
            n/=2;
            i = 0;
        }

        !(i%2) ? nums[i] = min(nums[2*i], nums[2*i+1]) : nums[i] = max(nums[2*i], nums[2*i+1]);
        ++i;
    }

    return nums[0];
}

int main(){
    vector<int> s = {810,831,908,631,554,917,392,544};
    cout << minMaxGame(s) << endl;

    return 0;
}