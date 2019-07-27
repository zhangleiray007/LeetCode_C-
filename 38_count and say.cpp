class Solution {
public:
	string countAndSay(int n) {
		string s = "1";
		n = n - 1;
		while (n){
			s = saysay(s);
			n = n - 1;
		}
		return s;
	}

	string saysay(string s){
		string rstr = "";
		char tmp = s[0];
		int n = 1;
		for (int i = 0; i < s.length() - 1; i++){
			if (s[i] == s[i + 1])
				n = n + 1;
			else{
				rstr = rstr + to_string(n) + tmp;
				n = 1;
				tmp = s[i + 1];
			}
		}

		return rstr + to_string(n) + tmp;
	
	}
};