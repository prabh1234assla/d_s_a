#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int m = matrix.size(), n = matrix[0].size();

    priority_queue<int> maxHeap;

    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            maxHeap.push(matrix[i][j]);
            if(maxHeap.size() > k)
                maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int main(){
    vector<vector <int>> s = {{1,5,9},{10,11,13},{12,13,15}};
    cout << kthSmallest(s, 7) << endl;
    return 0;
}