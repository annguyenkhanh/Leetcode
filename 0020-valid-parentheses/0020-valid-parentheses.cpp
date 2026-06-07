// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(char c : s){
//             if(c == '(' || c == '[' || c == '{'){
//                 st.push(c);
//             }
//             else{
//                 if (st.empty()){ return false;}
//                 char top = st.top();
//                 if(top == '(' && c == ')' || top == '[' && c == ']' || top == '{' && c == '}' ){
//                     st.pop();
//                 }
//                 else {return false;}
//             }
//         }
//         return st.empty();
//     }
// };


class Solution {
public:
    bool isValid(string s) {
        unordered_map <char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
        stack<char> st;
        for (char c : s){
            if(map.count(c)){
                if (st.empty() || st.top() != map[c]){
                    return false;
                }
                else st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};

//mindset:
// tạo 1 stack st và dùng 1 char c duyệt qua từng giá trị nếu là các dấu mở thì st.push(c) còn khi là dấu đóng thì lấy st.top() so với c nếu cùng loaị thì st.pop() để loại dấu đó ra, nếu khác thì return false; khi duyệt hết s rồi thì return st.empty() nếu empty thì true còn hong empty thì false

//mindset2:
// tạo 1 unordered_map với cặp key value là cặp ngoặc, xét map.count(c) để xem có c trong map không (c là ngoặc đóng), nếu là đóng thì xét tiếp st có rống hoặc st.top() có khác map value của c trong map không, nếu một trong hai điều kiện trên thì phán false luôn, còn nếu khác 2 điều kiện trên thì st.pop() để lấy giá trị cuối đó trong st ra ngoài, rồi xét tiếp, còn nếu map.count(c) là 0 thì có nghĩa c là ngoặc mở thì chỉ cần bỏ vào st là được