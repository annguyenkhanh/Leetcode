class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto max = std::max_element(candies.begin(), candies.end());
        vector<bool> st;
        for(char c : candies){
            auto total = c + extraCandies;
            if (total >= *max){
                st.push_back(true);
            }
            else st.push_back(false);
        }
        return st;
    }
};

//mindset:
// tạo 1 giá trị max, và 1 vòng for từng Kid, + extra cho kid đó, nếu lớn hơn hoặc bằng max thì true không thì false
