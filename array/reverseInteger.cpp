#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x) {
    bool neg = false;
    long long k = x;
    long long int rev = 0;

    if(k<0){
        neg = true;
        k*=-1;
    }
        
    while(k){
        rev*=10;
        rev+=(k%10);
        k=k/10;
    }

    if(neg)
        rev = rev*-1;

    if(rev <= ((long long int)pow(2,31)-1) && rev >= -(long long int)pow(2,31))
        return rev;

    return 0;
}

int main(){
    cout << reverse(-123444) << endl;
    return 0;
}