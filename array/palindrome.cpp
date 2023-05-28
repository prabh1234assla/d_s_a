#include <iostream>
#include <limits>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0)
        return 0;

    long long int rev = 0;
    int n = x;
    while(n%10 || n!=0){
        rev*=10;
        rev+=n%10;
        n=n/10;
    }
    cout << rev << endl;

    return !(x^rev);
}

int main(){
    cout << isPalindrome(1234567899) << endl;
    return 0;
}