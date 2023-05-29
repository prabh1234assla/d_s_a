#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    string ans = "";
    string s = to_string(num);

        int i = 0;

        do{

            if((i < s.size()) && ('1' <= s[i] < '5')){
                if((i+1 < s.size()) && s[i+1] == '0'){
                    if((i+2 < s.size()) && s[i+2] == '0'){
                        if((i+3 < s.size()) && s[i+3] == '0'){
                            ans.push_back('M');
                            i+=4;
                            continue;
                        }

                        ans.push_back('C');
                        i+=3;
                        continue;
                    }

                    ans.push_back('X');
                    i+=2;
                    continue;
                }

                ans.push_back('I');
                if(s[i] == '1'){
                    ++i;
                    continue;
                }

                else{
                    s[i] = (char)(s[i] - 1);
                    continue;
                }
            }

            if((i < s.size()) && s[i] == '4'){
                if((i+1 < s.size()) && s[i+1] == '0'){
                    if((i+2 < s.size()) && s[i+2] == '0'){
                        ans.push_back('C');
                        ans.push_back('D');
                        i+=3;
                        continue;
                    }

                    ans.push_back('X');
                    ans.push_back('L');
                    i+=2;
                    continue;
                }

                ans.push_back('I');
                ans.push_back('V');
                ++i;
                continue;
            }

            if((i < s.size()) && s[i] == '5'){
                if((i+1 < s.size()) && s[i+1] == '0'){
                    if((i+2 < s.size()) && s[i+2] == '0'){
                        ans.push_back('D');
                        i+=3;
                        continue;
                    }

                    ans.push_back('L');
                    i+=2;
                    continue;
                }

                ans.push_back('V');
                ++i;
                continue;
            }

            if((i < s.size()) && s[i] == '9'){
                if((i+1 < s.size()) && s[i+1] == '0'){
                    if((i+2 < s.size()) && s[i+2] == '0'){
                        ans.push_back('C');
                        ans.push_back('M');
                        i+=3;
                        continue;
                    }

                    ans.push_back('X');
                    ans.push_back('C');
                    i+=2;
                    continue;
                }

                ans.push_back('I');
                ans.push_back('X');
                ++i;
                continue;
            }   
        }while(i!=s.size());

    return ans;
}

int main(){
    cout << intToRoman(3) << endl;
    return 0;
}