#include <iostream>
#include <vector>
using namespace std;

void print(vector<char>& v){
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
}

void reverseString(vector<char>& s) {
    float const n = s.size()/2.0;
    char temp;

    for(int i=0; i<n; ++i){
        temp = s[i];
        s[i] = s[n*2 - i - 1];
        s[n*2 - i - 1] = temp;
    }
}

int main(){
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    print(s);

    return 0;
}