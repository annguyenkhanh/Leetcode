class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        for (string word : word1) s1+=word;
        for (string word : word2) s2+=word;
        return s1==s2;
    }
};

//mindset:
// tương tự bài Valid Parentheses  tạo 2 string chạy vòng for hết mỗi word để tạo thành 1 string, rồi return 2 cái string bằng nhau không