#include <iostream>
using namespace std;

int romanToInt(string s) {
    int sum = 0, i = 0;

    if(s.size() == 1){
        switch(s[0]){
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }
    }
    else{
        char p1, p2;

        do{
            p1 = s[i];
            if(i < s.size()-1){
                p2 = s[i+1];
                if(p1 == 'I' && p2 == 'V'){
                    sum+=4;
                    i+=2;
                    continue;
                }
                else if(p1 == 'I' && p2 == 'X'){
                    sum+=9;
                    i+=2;
                    continue;
                }
                else if(p1 == 'X' && p2 == 'L'){
                    sum+=40;
                    i+=2;
                    continue;
                }
                else if(p1 == 'X' && p2 == 'C'){
                    sum+=90;
                    i+=2;
                    continue;
                }
                else if(p1 == 'C' && p2 == 'D'){
                    sum+=400;
                    i+=2;
                    continue;
                }
                else if(p1 == 'C' && p2 == 'M'){
                    sum+=900;
                    i+=2;
                    continue;
                }
            }
            switch(p1){
                case 'I' : sum+=1; break;
                case 'V' : sum+=5; break;
                case 'X' : sum+=10; break;
                case 'L' : sum+=50; break;
                case 'C' : sum+=100; break;
                case 'D' : sum+=500; break;
                case 'M' : sum+=1000; break;
            }
                ++i;

        }while(i!=s.size());
    }
    return sum;
}

int main(){
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}