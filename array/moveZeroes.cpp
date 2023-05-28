#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}
void swap(int&a, int&b){
    int temp = a;
    a = b;
    b = temp;
}
vector<int> rearrangeArray(vector<int>& nums) {
    int l=0, m=0;

    while(m<nums.size()){
        if(nums[m])
            swap(nums[l++], nums[m++]);

        else
            m++;
    }

}

int main(){
    vector <int> a = {3,0, 0, 4, 0, 2, -1, -200, 0, 0, 3};
    vector <int> b = rearrangeArray(a);
    print(b);

    return 0;
}