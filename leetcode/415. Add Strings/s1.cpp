class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum;
        int carry = 0;
        auto i1 = num1.rbegin(), i2 = num2.rbegin();
        while (i1 != num1.rend() || i2 != num2.rend() || carry) {
            int n = carry;
            if (i1 != num1.rend()) n += *i1 - '0';
            if (i2 != num2.rend()) n += *i2 - '0';
            carry = n / 10;
            sum += (n % 10) + '0';
            if (i1 != num1.rend()) ++i1;
            if (i2 != num2.rend()) ++i2;
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};