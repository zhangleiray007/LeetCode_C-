class Solution {
public:
	bool isValid(string s) {
		vector<char> vr{' '};
		int n = 0;
		if (s.length() ==0)
			return true;
		for (auto c : s){
			if (c == '(' || c == '{' || c == '['){
				if (vr.size() > n)
					vr[n] = c;
				else
					vr.push_back(c);
				n = n + 1;
			}
			else {
				if (c == ')' || c == '}' || c == ']'){
					if (c == ')' && vr[n - 1] == '('){
						vr[n - 1] = ' ';
						n = n - 1;
					}		
					else if (c == '}' && vr[n - 1] == '{'){
						vr[n - 1] = ' ';
						n = n - 1;
					}						
					else if (c == ']' && vr[n - 1] == '['){
						vr[n - 1] = ' ';
						n = n - 1;
					}
					else
						return false;
				}
			}
		}
		for (auto i : vr){
			if (i != ' ')
				return false;
		}
		return true;

	}
};
#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
    }
};