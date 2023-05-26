#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void print(vector<string>& nums){
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

// bool myCmp(string s1, string s2){
//     if(s1[0] != '-' && s2[0] != '-'){
//         if (s1.size() == s2.size())
//                 return s1 > s2;

//         else {
//             return s1.size() > s2.size();
//         }
//     }
//     else
//         return stoi(s1) > stoi(s2);
// }

// string kthLargestNumber(vector<string>& nums, int k) {
//     sort(nums.begin(), nums.end(), myCmp);
    
//     return nums[k-1];   
// }

string kthLargestNumber(vector<string>& nums, int k) {
    sort(nums.begin(), nums.end(), [](string s1, string s2){
        if (s1.size() == s2.size())
                return s1 > s2;

        else {
            return s1.size() > s2.size();
        }
    });
    
    return nums[k-1];   
}

int main(){
    vector<string> s = {"1", "3", "0", "5", "18", "100", "29", "89999", "11", "9", "7"};
    cout << kthLargestNumber(s, 3) << endl;
    print(s);
    return 0;
}