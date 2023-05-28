#include <iostream>

int mySqrt(int x) {
    int l=1, r=x, m;

    while(m<=r){
        m = (r+l)/2;

        if(m*m == x)
            return (int)m*m;

        else if(m*m < x){
            l = m+1;
        }

        else{
            r = m-1;
        }
    }

    return 
}

int main(){

    return 0;
}