class Solution {
private:
    /*bool isNumBal(string s){
        int sum=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(') sum += 1; if(s[i]==')') sum -= 1;
            if(s[i]=='{') sum += 1; if(s[i]=='}') sum -= 1;
            if(s[i]=='[') sum += 1; if(s[i]==']') sum -= 1;
        }
        return sum==0;
    }*/
    bool isOrderCorrect(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]); 
            else {
            if (st.empty()) return false;
            char top = st.top();
            if ((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '[')) st.pop();
            else return false;
            }
        }
        return st.empty();
    }
public:
    bool isValid(string s) {
        //if(!isNumBal(s)) return false;
        return isOrderCorrect(s);
    }
};