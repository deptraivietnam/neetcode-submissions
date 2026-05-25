class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char c : s) {
            if (isalnum(c))
                cleaned += tolower(c);
        }
        string dao=cleaned;
        reverse(dao.begin(),dao.end());
        return dao==cleaned;
    }
};
