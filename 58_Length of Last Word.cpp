class Solution {
public:
	int lengthOfLastWord(string s) {
		if (s.length() == 0)
			return 0;
		//string::iterator it;
		int n = 0;
		for (int it = s.length()-1; it >= 0; --it)
		{
			if (s[it] == ' ' && n != 0)
				return n;
			else if (s[it] != ' '){
				++n;
			}
		}
		return n;
	}
};