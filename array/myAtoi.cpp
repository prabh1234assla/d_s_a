#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

    int myAtoi(string s) {
            int length = s.size();
    double num = 0;
    int i = 0;

    while(s[i] == ' ')
        ++i;

    bool neg = s[i] == '-';

    if(s[i] == '-' || s[i] == '+')
    ++i;
    while(i <= length-1 && s[i] >= '0' && s[i] <= '9'){
        num = num*10 + (s[i]-'0');
        ++i;
    }

    num = neg ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
        

    return num;
    }

int main(){
    string s = "-000000000000001";
    cout << myAtoi(s) << endl;

    return 0;
}