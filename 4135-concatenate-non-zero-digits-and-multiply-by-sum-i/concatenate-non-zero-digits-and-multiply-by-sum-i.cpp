class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string x_str="";
        long long digit_sum=0;
        for(char ch:s){
            if(ch!='0'){
                x_str+=ch;
                digit_sum+=(ch-'0');
            }

        }
        if(x_str.empty()) return 0;
        long long x=stoll(x_str);
        return x*digit_sum;
    }
};