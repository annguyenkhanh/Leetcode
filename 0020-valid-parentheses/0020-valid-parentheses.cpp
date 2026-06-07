class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else{
                if (st.empty()){ return false;}
                char top = st.top();
                if(top == '(' && c == ')' || top == '[' && c == ']' || top == '{' && c == '}' ){
                    st.pop();
                }
                else {return false;}
            }
        }
        return st.empty();
    }
};

//mindset:
// tạo 1 stack st và dùng 1 char c duyệt qua từng giá trị nếu là các dấu mở thì st.push(c) còn khi là dấu đóng thì lấy st.top() so với c nếu cùng loaị thì st.pop() để loại dấu đó ra, nếu khác thì return false; khi duyệt hết s rồi thì return st.empty() nếu empty thì true còn hong empty thì false