class Solution {
public:
    string addBinary(string a, string b) {

        string result;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while(i < a.length() || j < b.length()) {

            int sum = carry;
            if(i < a.length())
                sum += a[i--] - '0';
            if(j < b.length())
                sum += b[j--] -'0';

            carry = sum > 1 ? 1 : 0;
            result += to_string(sum%2);

        }
        if(carry) result += to_string(carry);
        reverse(result.begin(), result.end());

        return result;

        
    }
};