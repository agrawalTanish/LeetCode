class Solution {
public:
    int secondHighest(string s) {

        int n = s.length();

        int large = -1;
        int slarge = -1;

        for (int i = 0; i < n; i++) {

            if (isdigit(s[i])) {

                int digit = s[i] - '0';

                if (digit > large) {

                    slarge = large;
                    large = digit;
                }

                else if (digit > slarge && digit != large) {

                    slarge = digit;
                }
            }
        }

        return slarge;
    }
};