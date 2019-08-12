#include <algorithm>
class Solution {
public:
	string addBinary(string a, string b) {
		int lens,lenab;
		if (a.size() > b.size())
			lens = a.size();
		else
			lens = b.size();
		if (a.length() == 0)
			return b;
		if (b.length() == 0)
			return a;
		int ll = a.size() - b.size();
		lenab = abs(ll);
		string tmp(lenab, '0');
		if (a.size() > b.size())
			b = tmp + b;
		else if (a.size() < b.size())
			a = tmp + a;
		int addup = 0;
		string rstr = "";
		while (1){
			if (a[lens - 1] == '1' && b[lens - 1] == '1' && addup == 1) {
				addup = 1;
				rstr = rstr + "1";
			}
				
			else if (a[lens - 1] == '1' && b[lens - 1] == '1' && addup == 0){
				addup = 1;
				rstr = rstr + "0";
			}

			else if (a[lens - 1] == '1' && b[lens - 1] == '0' && addup == 1){
				addup = 1;
				rstr = rstr + "0";
			}
			
			else if (a[lens - 1] == '1' && b[lens - 1] == '0' && addup == 0){
				addup = 0;
				rstr = rstr + "1";
			}

			else if (a[lens - 1] == '0' && b[lens - 1] == '1' && addup == 1){
				addup = 1;
				rstr = rstr + "0";
			}
			else if (a[lens - 1] == '0' && b[lens - 1] == '1' && addup == 0){
				addup = 0;
				rstr = rstr + "1";
			}

			else if (a[lens - 1] == '0' && b[lens - 1] == '0' && addup == 1){
				addup = 0;
				rstr = rstr + "1";
			}

			else if (a[lens - 1] == '0' && b[lens - 1] == '0' && addup == 0){
				addup = 0;
				rstr = rstr + "0";
			}
			lens = lens - 1;
			if (lens == 0 && addup == 0){
					reverse(rstr.begin(), rstr.end());
					return(rstr);
			}
			else if (lens == 0 && addup == 1){
					reverse(rstr.begin(), rstr.end());
					return "1" + rstr;
			}
		
		}
	}
};