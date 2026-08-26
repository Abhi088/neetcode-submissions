class Solution {
private:
    bool isAlphaNum(char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
    }
    char toLower(char ch) {
        if(ch >= 'A' && ch <= 'Z') return ch + 32;
        return ch;
    }
public:
    bool isPalindrome(string s) {
        int l = s.length();
        int i = 0, j = l - 1;
        while(i < j) {
            while(i < j && !isAlphaNum(s[i])) i++;
            while(j > i && !isAlphaNum(s[j])) j--;
            if(toLower(s[i]) != toLower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};
